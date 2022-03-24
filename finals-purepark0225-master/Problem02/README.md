# Problem02 Syntactical Error (15 points)
The following code is a header file of a problem02. The developer made a mistake so that the other developer cannot instantiate the class. 
Add proper access specifiers to resolve the problem concerning the information hiding concept. 

```C++
#include <string>

class Human
{
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
    HandongStudent(int id);
    void wakeup();    
    int my_id;
};

```
You may refer the output result of the program using output program.
You may execute the program as follows.
```
YourProjectDirectory/Problem02 $./output
```
