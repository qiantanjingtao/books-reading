#include <iostream>

int main()
{
    int i = 10;
    int j = 20;
    const int &ref = i;

    std::cout << ref << std::endl;
    i = 100;

    std::cout << ref << std::endl;
    std::cout << i << std::endl;
    return 0;
}
