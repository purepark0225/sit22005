// 따배씨 2.2 정수형, 코딩

#include <iostream>
#include <cmath>
#include <limits>	//	해당 인자의 최대 값을 구할 수 있음

int main()
{
	using namespace std;

	short	s = 1;	// 2 bytes = 2 * 8 bits = 16 bits
	short 	m = 1;

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	// signed int의 최대 -> 32767이 표현할 수 있는 가장 큰 숫자이다
	// size에서 -1을 하는 것은 부호를 나타내는 제일 첫 번째 bit를 빼는 것임
	// 뒤에 -1을 또 빼준 것은 0의 경우를 뺀 것이다

	cout << std::numeric_limits<short>::max() << endl;	// 해당 인자의 최대값
	cout << std::numeric_limits<short>::min() << endl;	// 해당 인자의 최소값
	cout << std::numeric_limits<short>::lowest() << endl;	// 정수형을 표현하는 인자는 min과 lowest가 같음


	s = 32767;
	s += 1;	// 32768 (s = s + 1, s++, ++s)
			// -> -32768 (overflow)	표현할 수 있는 최대값에 1을 더해버리면 표현할 수 있는 최대 범위를 넘어섰기 때문에 가장 작은 수가 되어버림

	cout << s << endl;

	m = std::numeric_limits<short>::min();
	cout << "min?" << m << endl;	// -32768

	m = m - 1;
	cout << m << endl;	// 32767
						//32767, -32768, -32767, ... , 최소값부터 최대값까지 값이 이어져있다는 것을 알 수 있음

	unsigned int i = -1;	// unsinged 인데 -1을 넣어서 overflow되서 엉뚱한 수가 나옴

	cout << i << endl;

	return 0;
}