#pragma once

#include <iostream>
#include <stack>
#include <vector>
#include "../scanner/scanner.h"

template <class T, class T_EL>

void from_st(T& st, T_EL& i) {
    i = st.top();
    st.pop();
}

class Parser {
    Lex curr_lex;
    type_of_lex c_type;
    int c_val;
    std::string c_str;
    Scanner scan;
    std::stack<int> st_int;
    std::stack<type_of_lex> st_lex;
    std::stack<int> labels_for_con;
    std::stack<int> labels_for_break;
    void S();
    void B();
    void D();
    void E();
    void E1();
    void T();
    void F();
    void WR();
    void GV();
    void FOR_PARAMETERS();
    void dec(type_of_lex type, int i);
    void check_id();
    void eq_type(type_of_lex&);
    void gl();

public:
    std::vector<Lex> poliz;
    Parser() : scan() {}                            
    Parser(std::string program) : scan(program) {}  
    void analyze();
};
