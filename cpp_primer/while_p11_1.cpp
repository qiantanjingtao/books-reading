#include <iostream>

int main()
{
    int sum = 0, value = 50;
    while (value <= 100) {
        sum += value;
        value++;
    }

    std::cout << "50 to 100 inclusive is " << sum << std::endl;
}
