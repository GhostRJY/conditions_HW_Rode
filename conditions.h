#ifndef CONDITIONS_H
#define CONDITIONS_H

bool isEven(const int userValue)
{
    return userValue % 2 ? false : true;
}

void maxValue(int val1, int val2, int val3)
{
    
    if(val1 > val2 && val1 > val3)
        std::cout << "Maximal value is " << val1 << '\n';
    else if(val2 > val1 && val2 > val3)
        std::cout << "Maximal value is " << val2 << '\n';
    else if(val3 > val2 && val3 > val1)
        std::cout << "Maximal value is " << val3 << '\n';
    else
        std::cout << "they are equal" << '\n';

}

void positiveNegative(int userValue)
{
    if(userValue > 0)
        std::cout << "Value is positive\n";
    else if(userValue < 0)
        std::cout << "Value is negative\n";
    else
        std::cout << "Value is 0";
}

template<typename T>
void calculate(const T &firstVal, const T &secondVal, char func)
{
    switch(func) {
        case '+':
            std::cout << firstVal << " + " << secondVal << " = " << firstVal + secondVal << '\n';
            break;
        case '-':
            std::cout << firstVal << " - " << secondVal << " = " << firstVal - secondVal << '\n';
            break;
        case '*':
            std::cout << firstVal << " * " << secondVal << " = " << firstVal * secondVal << '\n';
            break;
        case '/':
            if(secondVal==0)
                std::cout <<"На ноль не делят!!!\n";
            else
            std::cout << firstVal << " / " << secondVal << " = " << firstVal / secondVal << '\n';
            break;
        
        default:
            std::cout << "нет такого выражения!!!\n";

    }
}

bool inRange(const int &userValue, const int rangeStart = 1, const int rangeEnd = 100)
{
    return (userValue >= rangeStart && userValue <= rangeEnd)?true : false;
}

bool multiples(int val1, int val2)
{
    return val1 % val2 ? false : true;
}

bool multiples357(int val1)
{
    if(!(val1 % 3)) {
        if(!(val1 % 5)) {
            if(!(val1 % 7))
                return true;
        }
    }

    return false;
}

int digitCount(int userValue)
{
    
    int counter{ 0 };

    //вычисляем кол-во цифр в значении
    while(userValue != 0) {
        userValue /= 10;
        ++counter;
    }
    return counter;
}

bool checkPalindrome(const std::string &userString)
{
    int length = userString.length();
    
    for(int i{ 0 }; i < length / 2; ++i) {
        if(userString[i] != userString[length - i - 1])
            return false;
    }

    return true;
}

#endif
