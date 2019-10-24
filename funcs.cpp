#include <iostream>
#include <string>
#include "funcs.h"
#include <cctype>
#include <fstream>

std::string removeLeadingSpaces(std::string line) {
    for (int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            return line.substr(i);
        }
    }
    return "";
}

int countChar(std::string line, char c) {
    int output = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            output++;
        }
    }
    return output;
}

std::string formatCode(std::string filename) {
    std::ifstream fin(filename);
    std::string currLine;
    std::string output = "";
    int currIndent = 0;
    while (std::getline(fin, currLine)) {
        int startsWithClosing = 0;
        currLine = removeLeadingSpaces(currLine);
        if (currLine.substr(0,1) == "}") {
            startsWithClosing = 1;
        }
        for (int i = 0; i < currIndent - startsWithClosing; i++) {
            output += "\t";
        }
        currIndent += countChar(currLine, '{') - countChar(currLine, '}');
        output += currLine + "\n";
    }
    return output;
}

std::string readFile(std::string filename) {
    std::ifstream fin(filename);
    std::string output((std::istreambuf_iterator<char>(fin)), std::istreambuf_iterator<char>());
    return output;
}