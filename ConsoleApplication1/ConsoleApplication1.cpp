#include <iostream>

int main()
{
    int num, sum=0,digit;
    std::cout << "Введите число: ";
    std::cin >> num;
    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    std::cout << "Сумма цифр числа: ";
    std::cout << sum;


    int x, n, h;
    std::cout << "Введите начальное число: ";
    std::cin >> x;
    std::cout << "Введите шаг геометрической прогрессии: ";
    std::cin >> h;
    std::cout << "Введите конечное число: ";
    std::cin >> n;
    for (int i = x; i <= n; i = i * h) {
        std::cout << i;
        std::cout << " ";
    }
}
