// 따배씨 2.6 불리언 자료형과 조건문 if, 코딩

#include <iostream>

// bool isEqual(int a, int b)
// {
// 	bool result = (a == b);

// 	return result;
// }

int main()
{
	using namespace std;

	// bool b1 = true;	// copy initialization
	// bool b2(false);	// direct ''
	// bool b3( true );	// uniform ''
	// b3 = false;

	// //cout << std::boolalpha;	// 0,1 대신 true or false로 출력됨
	// 						// noboolalpha 는 0,1 로 출력
	// //cout << !b1 << endl;
	// // cout << (true && true) << endl;	// 양쪽 다 true 이면 true
	// // cout << (true && false) << endl;	// 그 외에는 다 false
	// // cout << (false && true) << endl;
	// // cout << (false && false) << endl;

	// // cout << (true || true) << endl;	// 한쪽만 true라도 true
	// // cout << (true || false) << endl;
	// // cout << (false || true) << endl;
	// // cout << (false || false) << endl;

	// if (true)	// true 면 실행 아니면 실행 x
	// 	cout << "This is true " << endl;
	// else
	// 	cout << "This is false" << endl;

	// // cout << std::boolalpha;
	// // cout << isEqual(1, 1) << endl;
	// // cout << isEqual(0, 3) << endl;

	// // if (5)	// 0이면 False, 그 외에는 다 True
	// // {
	// // 	cout << "True" << endl;
	// // }
	// // else
	// // 	cout << "False" << endl;

	bool b;

	cin >> b;
	cout << std::boolalpha;
	cout << "Your input : " << b << endl;
	// boolean은 숫자 0 or 1이다.
	
	return 0;
}