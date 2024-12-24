﻿#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"



int main() {
    std::setlocale(LC_ALL, "");

    aba::MenuItem study = { "1 - Икусство России", aba::study };
    aba::MenuItem exit = { "0 - Выйти", aba::exit };

    aba::MenuItem* main_children[] = { &exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    int user_input;
    do {
        std::cout << "Приветствуем!" << std::endl;
        for (int i = 1; i < main_size; i++) {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "Введите номер > ";

        std::cin >> user_input;
        main_children[user_input]->func();

        std::cout << std::endl;
    } while (true);

    return 0;
}