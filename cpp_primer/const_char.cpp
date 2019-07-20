#include <iostream>

int main()
{
    char c = 'a';
    const char *cc = &c;
    char x = 'b';
    cc = &x;
    std::cout << *cc << std::endl;
    
    return 0;
}
