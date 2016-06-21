#include <iostream>

float celsiusToFahrenheit(float);

int main()
{
    float celsius;
    float fahrenheit;

    std::cout << "Temperature in Celsius: ";
    std::cin >> celsius;
    fahrenheit = celsiusToFahrenheit(celsius);
    std::cout << "Temperature in farenheit is :";
    std::cout << fahrenheit << "\n";
    return 0;
}

float celsiusToFahrenheit(float c)
{
    return (((c * 9) / 5) + 32);
}

