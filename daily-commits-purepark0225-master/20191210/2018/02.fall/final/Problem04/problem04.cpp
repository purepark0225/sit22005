#include <iostream>
#include <cstring>

class Item
{
public:
	Item(); // Default Constructor
	Item(const char* name, int val); // Constructor with argument
	Item(const Item& rhs); // Copy Constructor
	~Item(); // Destructor

public:	
	const Item& operator=(const Item& rhs); // Assign operator overloading
	const Item& operator=(const int val);   // Assign operator overloading

public:
	void addItem(const Item& item); // add two Item object
	
public:
	void print(std::ostream& os); // print function

public: // get/set function
	int  get_value() const;
	void set_value(const int val);
	
private: // member variable
	char* m_name;
	int   value;

protected: // static variable and static functions
	static int item_count;
	static void increase_item_count();
	static void decrease_item_count();
public:
	static void print_total_item(std::ostream& os);
};

int Item::item_count = 0;
void Item::increase_item_count()
{
	item_count ++;
}

void Item::decrease_item_count()
{
	item_count --;
}

void Item::print_total_item(std::ostream& os)
{
	os << "******" << std::endl;
	os << "There are total " << item_count << " item exists." << std::endl;
	os << "******" << std::endl;
}

Item::Item()
{
	Item::increase_item_count();
}

Item::Item(const char* name, int val)
{
	m_name = new char[strlen(name)+1];
	value = val;
	strcpy(m_name, name);
	Item::increase_item_count();
}

Item::Item(const Item& rhs)
{
	m_name = new char[strlen(rhs.m_name)];
	value = rhs.value;
	strcpy(m_name, rhs.m_name);
	Item::increase_item_count();
}

Item::~Item()
{
	delete [] m_name;
	Item::decrease_item_count();
}

const Item& Item::operator=(const Item& rhs)
{
	m_name = rhs.m_name;
	value = rhs.value;
	
	return *this;
}

const Item& Item::operator=(const int rhs)
{
	value = rhs;

	return *this;
}

int Item::get_value() const
{
	return value;
}

void Item::set_value(const int val)
{
	value = val;
}

void Item::addItem(const Item& item)
{
	value += item.value;
}

void Item::print(std::ostream& os)
{
	os << "Item Type: " << m_name << std::endl;
	os << "Item Value: " << value << std::endl;
}

int main()
{
	{
		Item i1("num", 10);
		i1.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		Item i2 = i1;
		i1 = 20;
		i1.print(std::cout);
		i2.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		Item i3;
		i3 = i1;
		i1.print(std::cout);
		i3.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		i3.addItem(i2);
		i3.print(std::cout);
		
		Item::print_total_item(std::cout);
	}
	
	// Check there is no remained data object
	Item::print_total_item(std::cout);
	return 0;
}