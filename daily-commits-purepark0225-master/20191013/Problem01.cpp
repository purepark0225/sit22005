#include <iostream>
#include <random>
#include <ctime>

char* generate_3_digit()
{
	char* res = new char[10];

	for(int i = 0; i < 10; i++)
		res[i] = i + '0';

	for(int i = 0; i < 3; i++)
	{
		char buf;
		int index = rand()%(10-i);
		buf = res[index];		// 스왑
		res[i] = res[index];
		res[index] = buf;

	}
	return res;
}

int main()
{
	// Game initalization
	char guess[3];
	int trials = 0;

	char* answer = generate_3_digit();

	int strike = 0, ball = 0, out = 0;
	while(strike != 3)
	{
		trials++;

		strike = 0;
		ball = 0;
		out = 0;

		std::cout << "Guess three number: (ex. 1 2 3)" << std::endl;
		std::cin >> guess[0] >> guess[1] >> guess[2];

		// // 0 이나 9보다 큰 숫자를 입력시 종료
		// if (guess[0] < 1 || guess[0] > 9
		// 	|| guess[1] < 1 || guess[1] > 9 ||
		// 	guess[2] < 1 || guess[2] > 9){
		// 	std::cout << "End Baseball Game" << std::endl;
		// 	break;
		// }

		for (int i = 0; i < 3; i++) {

			for (int j = 0; j < 3; j++){
				// res와 user가 입력한 값들이 같은지 확인
				if (answer[i] == guess[j]){

					if (i == j) {
						// 자리수랑 숫자가 모두 같으므로 Strike!
						strike++;
					}
					else{
						// 자리수는 다르지만 값은 같으므로 ball!
						ball++;
					}
				} //end if
			}// end j for
		}// end i for
		out = 3 - strike - ball;

		std::cout << guess[0] << guess[1] << guess[2] << std::endl;

		std::cout << "S:" << strike << " B:" << ball << " O:"<< out << std::endl;
	}
	
	std::cout << "You have found the right number with " << trials << " trials" << std::endl;

	delete[] answer;
	return 0;
}