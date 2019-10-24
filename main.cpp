#include <iostream>
#include <string>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main() {
    std::string filename;
    std::cout << "File name: ";
    std::cin >> filename;
    std::cout << formatCode(filename);
}