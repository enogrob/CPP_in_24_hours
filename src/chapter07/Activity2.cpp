#include <iostream>

int main()
{
    float goal[5];
    goal[0] = 0.9;
    goal[1] = 0.75;
    goal[2] = 0.5;
    goal[3] = 0.25;
    goal[4] = 0.95;

    float weight, target;

    std::cout << "Enter current weight: ";
    std::cin >> weight;
    std::cout << "\nEnter goal weight: ";
    std::cin >> target;
    std::cout << "\n";

    for (int i = 0; i < 5; i++) {
        float loss = (weight - target) * goal[i];
        std::cout << "Goal " << i << ": ";
        std::cout << weight - loss << "\n";
    }

    return 0;
}
