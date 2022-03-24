# Problem01 (15 points)
The following code contains the `Item` class type and `ItemContiner` class. 
However, it contains the semantical error. Therefore, it does not work correctly, and it generates the runtime error. 
You should fix the code to make your system work properly. 

```C++
#include "problem01.h"

#include <iostream>
#include <cstring>
#include <stdlib.h>

// Problematic Region Start
Item::Item()
:m_cost(-1), m_name(nullptr) 
{
    
}

Item::Item(char* name, int cost)
:m_cost(cost)
{

}

Item::Item(const Item& _rhs)
{
    m_cost = _rhs.m_cost;
}

Item& Item::operator=(const Item& _rhs)
{
    m_cost = _rhs.m_cost;

    return *this;
}

Item::~Item()
{
    delete [] m_name;
}
// Problematic Region End

const char* Item::get_name()
{
    return m_name;
}

int Item::get_item_cost()
{
    return m_cost;
}

void Item::print()
{
    if(m_name == nullptr)
    {
        std::cout << "NULL" << ":" << m_cost << std::endl;
    }
    else
    {
        std::cout << m_name << ":" << m_cost << std::endl;
    }
}


ItemContainer::ItemContainer(int _size)
:m_array_size(_size), m_count(0)
{
    m_array = new Item[_size];
}

ItemContainer::~ItemContainer()
{
    delete [] m_array;    
}

void ItemContainer::add_item(char* name, int cost)
{
    if(m_count < m_array_size)
    {
        m_array[m_count++] = Item(name, cost);
    }
}

// Problematic Region Start
void ItemContainer::sort_by_name()
{
    int i, j, indexMin;
    Item temp;

    for (i = 0; i < m_array_size - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < m_array_size; j++)
        {
            if (strcmp(m_array[j].get_name(), m_array[indexMin].get_name()) < 0)
            {
                indexMin = j;
            }
        }
        temp = m_array[indexMin];
        m_array[indexMin] = m_array[i];
        m_array[i] = temp;
    }
}

void ItemContainer::sort_by_cost()
{
    int i, j, indexMin;
    Item temp;

    for (i = 0; i < m_array_size - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < m_array_size; j++)
        {
            if (m_array[j].get_item_cost() > m_array[indexMin].get_item_cost())
            {
                indexMin = j;
            }
        }
        temp = m_array[indexMin];
        m_array[indexMin] = m_array[i];
        m_array[i] = temp;
    }
}

// Problematic Region End

void ItemContainer::print()
{
    for(int i = 0; i < m_array_size; i++)
    {
        m_array[i].print(); 
    }
}

```

You may refer the output result of the program using output program.
You may execute the program as follows. 
```
your_repository_path/Problem01# ./output
```

* Note that you should modify the problematic reigon only!