#include <iostream>

int main()
{
    int year = 2010;
    std::cout << "The year " << ++year << " passes.\n";
    std::cout << "The year " << ++year << " passes.\n";
    std::cout << "The year " << ++year << " passes.\n";

    std::cout << "\nIt is now " << year << ".";
    std::cout << " Have the Seattle Mariners won the World Series yet?\n";

    std::cout << "\nThe year " << year++ << " passes.\n";
    std::cout << "The year " << year++ << " passes.\n";
    std::cout << "The year " << year++ << " passes.\n";

    std::cout << "\nSurely the Mariners have won the Series by now.\n";
    return 0;
}
