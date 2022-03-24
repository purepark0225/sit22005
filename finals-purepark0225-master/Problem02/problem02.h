#pragma once

// Problmatic Region Start
#include <string>

class Human
{
public:
    int age;
    int get_age(){ return age; }

    Human();
    ~Human();

    void wakeup();
    void study(); 
    void sleep();
};

class HandongStudent: public Human
{
public:
	HandongStudent(int id);
	void wakeup();    
	int my_id;
};
// Problmatic Region End