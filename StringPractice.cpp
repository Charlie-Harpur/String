#include "String.h"
#include <iostream>

using std::cout, std::endl;

int main()
{
    String test;
    test = "aazz";
    test.toUpper();
    test.toLower();
    cout << test.print() << endl;
    return 0;
}