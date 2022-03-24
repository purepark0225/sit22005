#include <iostream>
#include "problem02.h"

// You should not touch or modify the cpp file

Human::Human()
{
    age = 20;
}


Human::~Human()
{

}

void Human::wakeup()
{
    std::cout << "Good morning!" << std::endl;
}

void Human::study()
{
    std::cout << "It is good day to study." << std::endl;
}

void Human::sleep()
{
    std::cout << "Good Night" << std::endl;
}

HandongStudent::HandongStudent(int id)
:my_id(id)
{

}

void HandongStudent::wakeup()
{
    std::cout << "[" << my_id << "] ";
    std::cout << "Why not change the world!" << std::endl;
}
