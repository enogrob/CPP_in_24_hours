#include <iostream>

float average(float, float);
int average(int, int);

int main()
{
    float f1, f2;
    int i1, i2;

    std::cout << "Enter first float: ";
    std::cin >> f1;
    std::cout << "Enter second float: ";
    std::cin >> f2;
    std::cout << "The average is : ";
    std::cout << average(f1, f2) << "\n";

    std::cout << "Enter first int: ";
    std::cin >> i1;
    std::cout << "Enter second int: ";
    std::cin >> i2;
    std::cout << "The average is : ";
    std::cout << average(i1, i2) << "\n";
}

float average(float f1, float f2)
{
    return (f1 + f2)/2;

}

int average(int i1, int i2)
{
    return (i1 + i2)/2;
}