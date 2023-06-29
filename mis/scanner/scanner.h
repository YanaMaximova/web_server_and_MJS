#pragma once

#include <fstream>
#include <iostream>
#include <stack>
#include <string>
#include "../identifier/identifier.h"
#include "../lexeme/lexeme.h"

extern std::ifstream fp;

class Scanner {
    char c;
    int look(const std::string buf, std::vector<std::string> list);
    bool check();
    void gc();

public:
    static std::vector<std::string> TW, TD;
    Scanner() = default;
    Scanner(const std::string program);
    Lex get_lex();
};
