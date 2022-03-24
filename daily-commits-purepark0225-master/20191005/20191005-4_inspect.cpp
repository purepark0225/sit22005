// inspect the bytes of an object

#include <iostream>
#include <iomanip>
void inspect(const void* ptr , size_t nbytes)
{
	const unsigned char* p = std:: static_cast <const unsigned ptr);
	std::cout.setf(std::ios::hex, std::ios::basefield);
	for (int i = 0; i < nbytes ; ++i)
		std::cout << "byte " << std::setw(2) 
			<< std::setfill(' ') << i
			<< ":    " << std::setw(2)
			<< std::setfill('0') << int(p[i]) << std::endl;
		}

int main()
{
	char c = 'a';
	short i = 100;
	long n = 100000L;
	double pi = 3.141529;
	char s[] = "hello";

	inspect(&c, sizeof c); cout << endl;
	inspect(&i, sizeof i); cout	<< endl;
	inspect(&n, sizeof n); cout	<< endl;
	inspect(&pi, sizeof pi); cout << endl;
	inspect(&s, sizeof s); cout << endl;
		
	}