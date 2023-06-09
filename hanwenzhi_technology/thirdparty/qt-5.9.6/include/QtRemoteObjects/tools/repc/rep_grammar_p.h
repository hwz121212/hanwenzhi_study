// This file was generated by qlalr - DO NOT EDIT!
#ifndef REP_GRAMMAR_P_H
#define REP_GRAMMAR_P_H

class rep_grammar
{
public:
    enum VariousConstants {
        EOF_SYMBOL = 0,
        Token_class = 2,
        Token_comma = 13,
        Token_comment = 14,
        Token_enum = 4,
        Token_enum_param = 5,
        Token_model = 10,
        Token_newline = 16,
        Token_pod = 3,
        Token_preprocessor_directive = 15,
        Token_prop = 6,
        Token_semicolon = 1,
        Token_signal = 8,
        Token_slot = 9,
        Token_start = 11,
        Token_stop = 12,
        Token_use_enum = 7,

        ACCEPT_STATE = 93,
        RULE_COUNT = 82,
        STATE_COUNT = 99,
        TERMINAL_COUNT = 17,
        NON_TERMINAL_COUNT = 31,

        GOTO_INDEX_OFFSET = 99,
        GOTO_INFO_OFFSET = 119,
        GOTO_CHECK_OFFSET = 119
    };

    static const char *const     spell[];
    static const short             lhs[];
    static const short             rhs[];

#ifndef QLALR_NO_REP_GRAMMAR_DEBUG_INFO
    static const int     rule_index[];
    static const int      rule_info[];
#endif // QLALR_NO_REP_GRAMMAR_DEBUG_INFO

    static const short    goto_default[];
    static const short  action_default[];
    static const short    action_index[];
    static const short     action_info[];
    static const short    action_check[];

    static inline int nt_action (int state, int nt)
    {
        const int yyn = action_index [GOTO_INDEX_OFFSET + state] + nt;
        if (yyn < 0 || action_check [GOTO_CHECK_OFFSET + yyn] != nt)
            return goto_default [nt];

        return action_info [GOTO_INFO_OFFSET + yyn];
    }

    static inline int t_action (int state, int token)
    {
        const int yyn = action_index [state] + token;

        if (yyn < 0 || action_check [yyn] != token)
            return - action_default [state];

        return action_info [yyn];
    }
};


#endif // REP_GRAMMAR_P_H

