
#include <iostream>
#include "BST.hpp"

int main(void)
{
    CBST obj;

    obj.InsetData(20);
    obj.InsetData(10);
    obj.InsetData(5);
    
    obj.InsetData(7);
    obj.InsetData(3);
    obj.InsetData(80);
    obj.InsetData(6);
    obj.InsetData(2);
    obj.InsetData(4);
    obj.InsetData(9);

    obj.Print();

    obj.DeleteNode(5);

    obj.Print();

    return 0;
}

