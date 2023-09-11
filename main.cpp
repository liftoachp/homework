#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    std::cout << "Введите коэффициенты a, b и c квадратного уравнения ax^2 + bx + c = 0:" << std::endl;
    std::cin >> a >> b >> c;

    double d = b * b - (4 * a * c);

    if (d > 0) {
  

         if (a == 0) {
            if ((b == 0) && (c == 0)) {
                std::cout << "x: любое число" << std::endl;
            }
            else if ((b != 0) && (c == 0)) {
                std::cout << "x: 0" << std::endl;
            }
            else if ((b == 0) && (c != 0)) {
                std::cout << "нет решений" << std::endl;
            }
            else {
                std::cout << "x: " << ((0 - c) / b) << std::endl;
            }
        }

        else if (b == 0) {
            if ((a == 0) && (c == 0)) {
                std::cout << "x: любое число" << std::endl;
            }
            else if ((a != 0) && (c == 0)) {
                std::cout << "x: 0" << std::endl;
            }
            else if ((a == 0) && (c != 0)) {
                std::cout << "нет решений" << std::endl;
            }
            else {
                std::cout << "x:1 " << -1 * sqrt((0 - c) / a) << std::endl << "x2: " << sqrt((0 - c) / a) << std::endl;
            }
        }

        else  if (c == 0) {
            if ((a == 0) && (b == 0)) {
                std::cout << "x: любое число" << std::endl;
            }
            else if ((a != 0) && (b == 0)) {
                std::cout << "x: 0" << std::endl;
            }
            else if ((a == 0) && (b != 0)) {
                std::cout << "x: 0" << std::endl;
            }
            else {
                std::cout << "x1: 0" << std::endl << "x2: " << b / a << std::endl;
            }
        }
        else {
            std::cout << "x1: " << ( ( (-1 * b) + (sqrt(d) ) ) / (2 * a) ) << std::endl << "x2: " << (((-1 * b) - sqrt(d)) / (2 * a)) << std::endl;
        }
    }
    else if (d == 0) {
        if ((a == 0) && (b == 0) && (c == 0)) {
            std::cout << "x : любое число" << std::endl;
        }
        else {
            std::cout << "x: " << (-1 * b) / (2 * a) << std::endl;
        }
    }
    else if (d < 0) {
        std::cout << "дискриминант меньше нуля" << std::endl;
    }
}
