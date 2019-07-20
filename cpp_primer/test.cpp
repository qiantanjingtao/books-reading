#include <iostream>

int main()
{
    const int a = 42; 
    auto j = a;
    j = 100;
    std::cout << j << std::endl;
    return 0;
}
