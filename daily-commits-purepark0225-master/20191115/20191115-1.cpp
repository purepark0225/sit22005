/*
예제 5.4의 프로그램에서 3행 2열의 CPoint 객체 배열을 생성하되,
배열 선언시에는 별도의 초기화를 하지 않고 단지 선언만 한 후,
사용자로부터 각 원소의  x, y 값을 차례로 입력받도록한다.
그리고 제대로 입력이 되었는지 출력을 통해 확인해보도록 한다
*/

#include <iostream>
using namespace std;

class CPoint
{
private:
  int x, y;

public:
  void SetXY(int a, int b)
  {
    x = a;
    y = b;
  }
  void Print()
  {
    cout << "(" << x << ", " << y << ")";
  }
};

int main(void)
{
  CPoint pt[3][2];
  int x, y;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "x와 y값 입력: ";
      cin >> x >> y;
      pt[i][j].SetXY(x, y);
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      pt[i][j].Print();
      cout << "\t";
    }
    cout << endl;
  }
  return 0;
}