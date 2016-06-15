#include <iostream>

int main()
{
    int grade;
    std::cout << "The passing grade is >= 70" << "\n";
    std::cout << "Enter the user grade (1-100): ";
    std::cin >> grade;
    if (grade >= 70)
        std::cout << "The user has passed !";
    else
        std::cout << "The user has failed !";
    return 0;
}