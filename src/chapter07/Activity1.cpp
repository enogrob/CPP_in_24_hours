#include <iostream>

int main()
{
    char firstname[50];
    char lastname[50];

    std::cout << "\nWhat is your first name? ";
    std::cin.getline(firstname, 49);

    std::cout << "\nWhat is your last name? ";
    std::cin.getline(lastname, 49);

    std::cout << "\nWellcome " << firstname << " " << lastname << "!" << std::endl;

    return 0;
}
