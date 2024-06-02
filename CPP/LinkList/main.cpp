#include <iostream>
#include "SLL.hpp"


int main(void)
{
    CList oSSL;

    oSSL.insert_end(10);
    oSSL.insert_end(12);
    oSSL.insert_end(14);
    oSSL.insert_end(16);

    std::cout << "List after insert_end: " << oSSL << std::endl;

    oSSL.insert_start(8);
    oSSL.insert_start(6);

    std::cout << "List after insert_end: " << oSSL << std::endl;

    return 0;
}