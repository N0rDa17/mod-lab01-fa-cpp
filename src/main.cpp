// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    setlocale(LC_ALL, "Russian");
    char str[100];
    std::cout << "Введите текст: ";
    std::cin.getline(str, 100);
    std::cout << "Лаб/раб-1.1: " << faStr1(str) << std::endl;
    std::cout << "Лаб/раб-1.2: " << faStr2(str) << std::endl;
    std::cout << "Лаб/раб-1.3: " << faStr3(str) << std::endl;
    return 0;
}
