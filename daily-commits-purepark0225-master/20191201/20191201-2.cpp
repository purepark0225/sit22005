// Operator Overloading
// 전역 함수에 의한 오버로딩
// https://pacs.tistory.com/entry/C-%EC%97%B0%EC%82%B0%EC%9E%90-%EC%98%A4%EB%B2%84%EB%A1%9C%EB%94%A9-Operator-Overloading%EC%9D%98-%EB%91%90%EA%B0%80%EC%A7%80-%EB%B0%A9%EB%B2%95

#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0):x(_x), y(_y){}
	void ShowPosition();
	friend Point operator+(const Point& p1, const Point& p2);
};

void Point::ShowPosition(){
	cout << x << ", " << y << endl;
}

Point operator+(const Point& p1, const Point& p2) // 전역함수
{
	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}


int main(void)
{
	Point p1(1, 2);
	Point p2(2, 1);
	Point p3 = p1 + p2;	// operator+ (p1, p2)
	p3.ShowPosition();

	return 0;
}

