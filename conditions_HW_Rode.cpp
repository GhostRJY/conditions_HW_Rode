#include <iostream>
#include"conditions.h"

int main()
{
    ////1.	Ввести число, и определить – чётное оно, или нет.
    /*int userValue{};
    std::cout << "Enter Value ->";
    std::cin >> userValue;
    if(isEven(userValue))
        std::cout << "\nValue is even\n";
    else
        std::cout << "\nValue is not even\n";*/

    //    2.	Ввести три числа и найти наименьшее среди них.
    /*int value1, value2, value3;
    std::cout << "Enter Value 1 ->";
    std::cin >> value1;
    std::cout << "\nEnter Value 2 ->";
    std::cin >> value2;
    std::cout << "\nEnter Value 3 ->";
    std::cin >> value3;

    maxValue(value1, value2, value3);*/

    //    3.	Ввести число, и выяснить - положительное оно, отрицательное, или равно нулю ?
    /*int userValue{ 0 };
    std::cout << "Enter Value ->";
    std::cin >> userValue;

    positiveNegative(userValue);*/

    //    4.	Реализовать калькулятор.Вводятся 2 любых вещественных числа в переменные a и b.Необходимо вывести на экран меню с пунктами :
    /*double val1{}, val2{};
    char choice;
    std::cout << "Enter Value 1 ->";
    std::cin >> val1;
    std::cout << "\nEnter Value 2 ->";
    std::cin >> val2;
    std::cout << "\nEnter operator (+,-,*,/,%) ->";
    std::cin >> choice;
    
    calculate(val1, val2, choice);*/
    
    //    5.	Ввести с клавиатуры символ.Определить, чем он является : цифрой, буквой или знаком пунктуации.
    /*char character;
    std::cin >> character;

    if(isdigit(character))
        std::cout << "Вы ввели цифру\n";
    if(isalpha(character))
        std::cout << "Вы ввели букву\n";*/

    //    6.	Ввести с клавиатуры число и проверить, принадлежит ли это число диапазону от N до M(включительно).
    /*const int rangeStart{ 5 }, rangeEnd{ 10 };
    int userValue{};
    std::cout << "Enter Value ->";
    std::cin >> userValue;

    if(inRange(userValue))
        std::cout << "\nЧисло лежит в диапазоне от " << rangeStart << " до " << rangeEnd << '\n';
    else
        std::cout << "\nЧисло лежит вне диапазоне от " << rangeStart << " до " << rangeEnd << '\n';*/


    //    7.	Написать программу для проверки кратности числа X числу Y(оба числа вводятся с клавиатуры).
    /*int value1{};
    int value2{};
    std::cout << "Enter Value 1 ->";
    std::cin >> value1;
    std::cout << "\nEnter Value 2 ->";
    std::cin >> value2;
    
    if(multiples(value1, value2)) {
        std::cout << "\nЧисло " << value1 << " кратно " << value2 << '\n';
    }
    else {
        std::cout << "\nЧисло " << value1 << " не кратно " << value2 << '\n';
    }*/

    //    8.	Ввести число и определить кратно ли оно 3, 5, и 7 одновременно.
    /*int userValue{};
    
    std::cout << "Enter Value 1 ->";
    std::cin >> userValue;
    

    if(multiples357(userValue)) {
        std::cout << "\nЧисло " << userValue << " кратно 3, 5, 7\n";
    } else {
        std::cout << "\nЧисло " << userValue << " не кратно 3, 5, 7\n";
    }*/

    //    9.	Показать модуль введённого числа.
    /*int userValue{ -10 };
    std::cout << "Модуль числа " << userValue << " = " << std::abs(userValue) << '\n';*/

    //    10.	 Вводится целое число(не более 4 разрядов!).Определить количество цифр в нём.
    /*int userValue{};
    
    std::cout << "введите число ->";
    std::cin >> userValue;
    
    std::cout << "\n в числе " << userValue << " (" << digitCount(userValue) << ") цифр\n";*/
    
    //    11.	Ввести с клавиатуры пятизначное число и определить, является ли оно палиндромом(т.е.одинаково читается в обоих направлениях - например,
    // 12321 будет палиндромом, а 12345 – не палиндром).
    /*std::string userString;

    std::cout << "Введите строку ->";
    std::cin >> userString;

    if(checkPalindrome(userString)) {
        std::cout << "\nЭто палиндром\n";
    }
    else {
        std::cout << "\nЭто не палиндром\n";
    }*/

    //    12.	Пользователь задаёт координаты верхнего левого, и нижнего правого угла прямоугольника, а также координаты точки(X, Y) в декартовой системе координат.
    // Принадлежит ли точка этому прямоугольнику ?

struct Point
{
    int m_x;
    int m_y;
};

struct Square
{
    Point m_first;
    Point m_second;    
};
    
Square userSquare;
Point userPoint;

std::cout << "Введите координаты прямоугольника\nверхняя точка ->";
std::cin >> userSquare.m_first.m_x;
std::cin >> userSquare.m_first.m_y;
std::cout << "\nнижняя точка ->";
std::cin >> userSquare.m_second.m_x;
std::cin >> userSquare.m_second.m_y;

std::cout << "\nВведите координаты точки ->";
std::cin >> userPoint.m_x;
std::cin >> userPoint.m_y;

if(userPoint.m_x >= userSquare.m_first.m_x
   && userPoint.m_x <= userSquare.m_second.m_x) {
    if(userPoint.m_y >= userSquare.m_first.m_y
       && userPoint.m_y <= userSquare.m_second.m_y) {
        std::cout << "\nТочка находится в прямоугольнике\n";
    }
}
else {
    std::cout << "\nТочка находится вне прямоугольника\n";
}

    return 0;
}

