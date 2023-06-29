#pragma once

#include <iostream>
#include <stack>
#include "../executer/executer.h"
#include "../parser/parser.h"

class Interpreter {
    Parser parse;
    Executer executer;

public:
    Interpreter() : parse(){};                           
    Interpreter(std::string program) : parse(program){};  
    void interpretation();                                
};
