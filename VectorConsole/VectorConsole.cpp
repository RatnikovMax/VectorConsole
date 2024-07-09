#include "VectorConsole.h"

int main() {
    setlocale(LC_ALL, "ru");
    Vector vec1(2, 3, 4);
    Vector vec2(4, 5, 6);
    std::cout << "Вектор 1: " << vec1 << std::endl;
    std::cout << "Вектор 2: " << vec2 << std::endl;
    char s;
    float ress{};
    std::cout << "Введите действие:";
    while (std::cin >> s) {
        Vector res;
        switch (s) 
        {
        case '+':
            res = vec1 + vec2;
            std::cout << res << std::endl;
            break;
        case '-':
            res = vec1 - vec2;
            std::cout << res << std::endl;
            break;
        case '*':
            res = vec1 * 2;
            std::cout << res << std::endl;
            break;
        case '&':
            ress = vec1.scale(vec2);
            std::cout << ress << std::endl;
            break;
        case '=':
            res = vec1 = vec2;
            std::cout << res << std::endl;
            break;
        default: 
            std::cout << "Введите действие заново" << std::endl;
            break;
        }
        std::cout << "Введите действие:";
    }

    auto normalization = vec1.normalization();
    std::cout << "Нормализация:" << normalization << std::endl;

    auto rez = vec1.baziz();
    std::cout << "Базис:" << rez << std::endl;

    return 0;
}

