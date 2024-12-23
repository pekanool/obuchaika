#include <clocale>
#include <cstdlib>
#include <iostream>

int main() {
    std::setlocale(LC_ALL, "");

    int user_input;
    do {
        std::cout << "Приветствуем!" << std::endl;
        std::cout << "1 - Икусство России" << std::endl;
        std::cout << "0 - Выйти" << std::endl;
        std::cout << "Введите номер > ";

        std::cin >> user_input;
        if (user_input == 1) {
            //TODO
        }
        else if (user_input == 0) {
            exit(0);
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}