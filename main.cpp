#include "includes.h"

int main(int argc, char**argv) {

    /*  read file  */
    std::ifstream code_file;
    std::string code;
    std::string buffer;

    while (!std::getline(code_file, buffer)) {
        code.append(buffer);
    }
    
    std::cout << code;
}