#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    int cnt = 1;

     while (std::cin >> book) {     
        Sales_item tmp;
        if(std::cin >> tmp) {
            if (book.isbn() == tmp.isbn()) {
                cnt++
            } else {
                std::cout << cnt << std::endl;
                cnt = 1;
            }
            
        }

    }
    std::cout << cnt << std::endl;

    return 0;
}
