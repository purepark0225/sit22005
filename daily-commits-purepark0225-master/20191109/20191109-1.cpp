/* new와 delete의 사용 
My Pet	*/

#include <iostream>
using namespace std;


typedef struct Animal {	// Animal 구조체를 만들어서 typedef를 통해 struct Animal을 Animal로 간추림
	char name[30];		// 이름
	int age;			// 나이

	int health;			// 체력
	int food;			// 배부른 정도
	int clean;			// 깨끗한 정도
}	Animal;


void create_animal(Animal *animal) {
	cout << "동물의 이름 ";
	cin >> animal -> name;

	cout << "동물의 나이 ";
	cin >> animal -> age;

	animal -> health = 100;
	animal -> food = 100;
	animal -> clean = 100;
}

void play(Animal *animal) {
	
	animal -> health -= 10;
	animal -> food -= 20;
	animal -> clean -= 30;
}

void one_day_pass(Animal *animal){
	// 하루가 지나면
	animal -> health -= 10;
	animal -> food -= 30;
	animal -> clean -= 20;
}

void show_stat(Animal *animal) {
	cout << animal -> name << "의 상태" << endl;
	cout << "체력	: " << animal -> health << endl;
	cout << "배부름	: " << animal -> food << endl;
	cout << "청결	: " << animal -> clean << endl;
}

int main() {
	Animal *list[10];
	int animal_num = 0;

	for (;;) {
		cout << "1. 동물 추가하기" << endl;
		cout << "2. 놀기 " << endl;
		cout << "3. 상태 보기 " << endl;

		int input;
		cin >> input;

		switch (input){
			int play_with;
			case 1:
				list[animal_num] = new Animal;	// Animal을 new로 생성
				create_animal(list[animal_num]);	// Animal의 각 값들을 초기화

				animal_num++;
				break;

			case 2:
				cout << "누구랑 놀게? : ";
				cin >> play_with;

				if (play_with < animal_num) 	// 이상한 숫자 들어오면 실행 x
					play(list[play_with]);		// 예를 들어 dog는 1인데 빈 숫자 2를 넣으면
												// 그냥 pass
				break;

			case 3:
			cout << "누구껄 보게? : ";
			cin >> play_with;
			if (play_with < animal_num) 
				show_stat(list[play_with]);
		}


		for (int i = 0; i != animal_num; i++){	// case가 한 번씩 실행될 때마다
			one_day_pass(list[i]);				// 하루가 지나는 것으로 간주
		}
	}
	for (int i = 0; i != animal_num; i++){
		delete list[i];
	}
}