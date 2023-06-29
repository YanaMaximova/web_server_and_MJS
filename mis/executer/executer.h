#pragma once

#include <iostream>
#include <stack>
#include <vector>
#include "../lexeme/lexeme.h"
#include "../parser/parser.h"
#include "../identifier/identifier.h"

class Executer {
public:
    void execute(std::vector<Lex>& poliz);
};
