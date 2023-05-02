// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    char str[100];
    std::cout << "Введите текст: ";
    std::cin.getline(str, 100);
    std::cout << "Lab1.1: " << faStr1(str) << std::endl;
    std::cout << "Lab1.2: " << faStr2(str) << std::endl;
    std::cout << "Lab1.3: " << faStr3(str) << std::endl;
    
    return 0;
}
