#include <iostream>

int main()
{
    char c = 'a';
    char *const cc = &c;
    char x = 'b';
    *cc = 'b';
    std::cout << *cc << std::endl;
    
    return 0;
}
