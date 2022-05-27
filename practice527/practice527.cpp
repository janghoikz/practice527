#include <iostream>

void PrintHelloWorld()
{
    std::cout << "Hello World!" << std::endl;
}
void PrintNumber(int number)
{
    std::cout << "넘겨주신 숫자는" << number << "입니다" << std::endl;
}

int MultiplyBy2(int a)
{
    int result = a * 2;
    return result;
}

int MultiplyBy(int a, int b)
{
    int c = a * b;
    return c;
}

int main()
{
    int a = 5;
    int b = 3;
    int result = MultiplyBy(a, b);
    PrintNumber(result);
}
