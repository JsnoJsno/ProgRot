#include "includes.h"
#include "tokens_list.h"

int main(int argc, char**argv) {

    /*  read file  */
    std::ifstream code_file(argv[1]);
    std::string str_code;
    std::string buffer;

    while (std::getline(code_file, buffer)) {
        str_code += buffer;
    }
    
    /*  tokenize  */
    std::vector<size_t> code;

    return 0;
}