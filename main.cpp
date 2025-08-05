#include "includes.h"

int main(int argc, char**argv) {

    /*  read file  */
    std::ifstream code_file(argv[1]);
    std::string code;
    std::string buffer;

    while (std::getline(code_file, buffer)) {
        code += buffer + "\n";
    }
    
    std::cout << code;
    return 0;
}