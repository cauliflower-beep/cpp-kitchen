#include <iostream>
/**
 * compile: g++ -o file file2.cpp file1.cpp
 * execute: ./file
 */
extern int ext;
int main() { std::cout << (ext + 10) << std::endl; }