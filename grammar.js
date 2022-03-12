let i = token.immediate

module.exports = grammar({
    name: "luap",

    inline: $ => [
        $.quantifier,
    ],

    conflicts: $ => [
        [$.set, $.range],
        [$.negated_set, $.range],
    ],

    rules: {
        pattern: $ => seq(
            optional($.anchor_begin),
            repeat(
                choice(
                    alias(i("$"), $.character), // To resolve ambiguities with the end anchor
                    $.character,
                    $.class,
                    $.set,
                    $.negated_set,
                    $.capture,
                )
            ),
            optional($.anchor_end),
        ),

        anchor_begin: _ => i("^"),
        anchor_end: _ => prec(1, i("$")),

        _raw_character: _ => choice(i(/[^%\(\[\.\n]/), "."),

        character: $ => seq(
            $._raw_character,
            optional($.quantifier),
        ),

        all_letters_char: _ => i("a"),
        control_char: _ => i("c"),
        digit_char: _ => i("d"),
        printable_char: _ => i("g"),
        lowercase_char: _ => i("l"),
        punctuation_char: _ => i("p"),
        space_char: _ => i("s"),
        uppercase_char: _ => i("u"),
        alphanumeric_char: _ => i("w"),
        hexadecimal_char: _ => i("x"),
        escape_char: _ => i(/\W/),
        capture_index: _ => i(/[1-9]/),
        balanced_match: $ => seq(
            i("b"),
            field("first", alias(i(/./), $.character)),
            field("last", alias(i(/./), $.character)),
        ),

        frontier_pattern: $ => seq(
            i("%f"),
            choice(
                $.set,
                $.negated_set,
            ),
        ),

        zero_or_more: _ => i("*"),
        shortest_zero_or_more: _ => i("-"),
        one_or_more: _ => i("+"),
        zero_or_one: _ => i("?"),

        quantifier: $ => choice(
            $.zero_or_more,
            $.shortest_zero_or_more,
            $.one_or_more,
            $.zero_or_one,
        ),

        _class: $ => seq(
            i("%"),
            choice(
                $.all_letters_char,
                $.control_char,
                $.digit_char,
                $.printable_char,
                $.lowercase_char,
                $.punctuation_char,
                $.space_char,
                $.uppercase_char,
                $.alphanumeric_char,
                $.hexadecimal_char,
                $.capture_index,
                $.balanced_match,
                $.escape_char,
            ),
        ),

        class: $ => prec.right(seq(
            choice($._class, $.frontier_pattern),
            optional($.quantifier),
        )),

        range: $ => prec.dynamic(1, seq(
            field("from", alias($._raw_character, $.character)),
            i("-"),
            field("to", alias(/[^\]]/, $.character)),
        )),

        set: $ => prec.left(seq(
            i("["),
            repeat1(
                choice(
                    alias($._raw_character, $.character),
                    alias(i("-"), $.character),
                    alias(i("("), $.character),
                    $.range,
                    $._class,
                )
            ),
            i("]"),
            optional($.quantifier),
        )),

        negated_set: $ => prec.left(seq(
            i("["),
            i("^"),
            repeat1(
                choice(
                    alias($._raw_character, $.character),
                    alias(i("-"), $.character),
                    alias(i("("), $.character),
                    $.range,
                    $._class,
                )
            ),
            i("]"),
            optional($.quantifier),
        )),

        capture: $ => seq(
            i("("),
            repeat(
                choice(
                    $.set,
                    $.negated_set,
                    $.class,
                    $.character,
                    $.capture,
                ),
            ),
            i(")"),
            optional($.quantifier),
        ),
    },
})
