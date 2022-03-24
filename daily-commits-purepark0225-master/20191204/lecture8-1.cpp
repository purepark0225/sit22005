#include<iostream>
using namespace std;

class Human{
private:
	int age;		// personal information
	double height;
	char* name;

public:
	Human();	// 기본 생성자, initialization
	Human(int, double, char*);

	void AskName(Human);	// member functions
	void AskAge(Human);
	int GetAge();
	char* GetName();
	void What_is_your_name();
	void How_old_are_you();

private:					// private functions
	void Aging();
	void Growing();
};

int Human::GetAge()
{
	return age;
}

char* Human::GetName()
{
	return name;
}

void Human::AskName(Human other_person){
	cout << GetName() << " : " << "Hi, WHat is your name?" << endl;
	other_person.What_is_your_name();
}

void Human::AskAge(Human other_person){
	cout << GetName() << " : " << "How old are you?" << endl;
	other_person.How_old_are_you();
	// send the message How_old_are_you() to the other
	// invoke the other's method How_old_are_you()
	// call the function How_old_are_you() defined in the other
}

void Human::What_is_your_name(){
	cout << GetName() << " : " << "Hello, I am" << GetName() << endl;
}

void Human::How_old_are_you(){
	cout << GetName() << " : " << "I am" << GetAge() << "." << endl; 
}

Human::Human()
{
	age = -1;
	height = 0.0;
	name = "";
}

Human::Human(int Age, double Height, char* Name){
	age = Age;
	height = Height;
	name = Name;
}

void Human::Aging()
{
	age ++;
}

void Human::Growing()
{
	height += 0.5;
}

int main(){
	Human gdhong(20, 180, "Hong, Gil Dong");
	Human yhkim(20, 160, "Kim, Young Hee");

	cout << "Greeting" << endl;
	gdhong.AskName(yhkim);
	yhkim.AskName(gdhong);
	gdhong.AskAge(yhkim);
	yhkim.AskAge(gdhong);
}