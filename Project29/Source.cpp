#include <iostream>
#include <Windows.h>
bool hasTwoSameDigits(int n) {/*функция hasTwoSameDigits проверяет, есть ли в числе две одинаковые цифры а потом
    используя массив count, чтобы подсчитывать количество встреченных цифр*/
    int count[10] = { 0 };

    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        if (count[digit] == 2) {
            return true;
        }
        n /= 10;
    }

    return false;
}
bool hasUniqueDigits(int num) {
    int digitCount[10] = { 0 }; // массив для подсчета количества каждой цифры
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        if (digitCount[digit] > 1) {
            return false; // если какая-то цифра встречается больше одного раза, возвращаем false
        }
        num /= 10;
    }
    return true;
}
int getSumOfDigits(int n)
{
    if (n < 0)
        return getSumOfDigits(-n);
    if (n <= 10)
        return n;
    return (n % 10) + getSumOfDigits(n / 10);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count = 0;

    for (int i = 100; i <= 999; i++) {
        if (hasTwoSameDigits(i)) {
            count++;
        }
    }
    int coun = 0;
    for (int i = 100; i < 1000; i++) {
        if (hasUniqueDigits(i)) {
            coun++;
        }
    }
    std::cout << "Количество целых чисел в диапазоне от 100 до 999 с разными цифрами: " << coun << std::endl;
    std::cout << "Количество целых чисел от 100 до 999 с двумя одинаковыми цифрами: " << count << std::endl;

    
    int i = 0, a = 0, k;

    std::cout << "Введите число: ";
    std::cin >> k;
     
    while (k > 0)
    {
        if (k % 10 != 3 && k % 10 != 6)
        {
            a *= 10;
            a += k % 10;
        }
        k /= 10;
    }

    std::cout << "Полученное число: ";

    while (a > 0)
    {
        std::cout << a % 10;
        a /= 10;
    }
    std::cout << "Enter n:";
    int n;
    std::cin >> n;
    std::cout << "DIVISORS: " ;
    n = (n < 0) ? -n : n;

    for (int i = -n; i <= n; i++) {
        if (i == 0) continue;
        if (n % i == 0) {
            std::cout << i << ' ';
        }
    }

    std::cout << "ВВЕдите А ";

    int a;
    std::cin >> a;

    int sum = getSumOfDigits(a);

    if (a * a == sum * sum * sum) {
        std::cout << "ДА"  ;
    }
    else {
        std::cout << "НЕт"  ;
    }
    int num;
        std::cout << "Введите число";
    std::cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            std::cout << i;

        std::cout << "введите два числа: ";
        int a, b, l;
        std::cin >> a >> b;
        if (a > b)
            l = a;
        else
            l = b;
        for (int i = 1;i <= l;i++)
            if (a % i == 0 && b % i == 0)
                std::cout << i  ;
    return 0;
}