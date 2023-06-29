#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "interpreter/interpreter.h"
#include "lexeme/lexeme.h"

int main(int argc, char** argv, char** env) {
    std::cerr << env[0] << std::endl;
    try {
        Interpreter i;
        if (argc == 2) {  // if running through a file './prog test_prog.js'
            i = Interpreter(argv[1]);
        } else if (argc == 1) {  // if running through a './prog < test_prog.js'
            i = Interpreter();
        }
        i.interpretation();
        return 0;
    } catch (char error_char) {
        std::cerr << "Unexpected symbol: " << error_char << std::endl;
        return 1;
    } catch (Lex lexeme) {
        std::cerr << "Unexpected lexeme: " << lexeme << std::endl;
        return 1;
    } catch (const char* str) {
        std::cerr << "Error: " << str << std::endl;
    }
    return 0;
}
