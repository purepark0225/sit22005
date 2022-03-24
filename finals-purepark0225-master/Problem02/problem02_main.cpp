#include <iostream>
#include "problem02.h"

// You should not touch or modify the cpp file
int main()
{
    Human h1;
    HandongStudent h2(21900000);

    Human h3 = h1;

    h1.wakeup();
    h2.wakeup();

    Human h4 = h1;

    h1.study();
    h2.study();

    h1.sleep();
    h2.sleep();

    Human h5 = h1;

    return 0;
}