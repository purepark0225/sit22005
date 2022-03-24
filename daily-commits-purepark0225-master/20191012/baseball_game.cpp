// Baseball game

#include <iostream>
#include <time.h>
 
using namespace std;
 
int main() {
 
    cout << "야구 게임" << endl;
 
    int iNum[9] = {};
 
    // 1 ~ 9 까지의 수를 할당
    for (int i = 0; i < 9; i++) {
        iNum[i] = i + 1;
    }
 
    // 100번 셔플
    int iTemp, idx1, idx2;
    srand((unsigned int)time(0));
    for (int i = 0; i < 100; i++) {
        idx1 = rand() % 9;
        idx2 = rand() % 9;
        
        // 스왑
        iTemp = iNum[idx1];
        iNum[idx1] = iNum[idx2];
        iNum[idx2] = iTemp;
    }
 
    int iStrike = 0, iBall = 0; 
    int input[3] = {};
    int count = 0; // 몇번만에 정답을 맞추는지
 
    while (true) {
        cout << "1 ~ 9 사이의 숫자 중 3개 입력 하시오 (그 밖의 숫자 입력시 종료)" << endl;
        cin >> input[0] >> input[1] >> input[2]; // 입력 받는다.
 
        // 0 누르면 종료
        if (input[0] < 1 || input[0] > 9
            || input[1] < 1 || input[1] > 9
            || input[2] <1 || input[2] > 9) {
            break;
        }
        
        for (int i = 0; i < 3; i++) {
 
            for (int j = 0; j < 3; j++) {
 
                // iNum과 user가 입력한 값들이 같은지 확인
                if (iNum[i] == input[j]) {
                    
                    if (i == j) {
                        // 자리수랑 숫자가 모두 같으므로 Strike!
                        iStrike++;
                    }
                    else {
                        // 자리수는 다르지만 값은 같으므로 ball!
                        iBall++;
                    }
                }// end if
 
            }// end j for
        }// end i for
        
        count++;
 
        if (iStrike == 3) {
            // 모두 맞췄으므로 빠져나온다.
            cout << count << "번 만에 맞췄습니다." << endl;
            break;
        else {
            cout << "Strike : " << iStrike << "\tBall : " << iBall << endl;
            // 아직 못맞춤. 다시 게임 시작 및 초기화
            iStrike = 0;
            iBall = 0;
        }
        
    }// end while
 
    return 0;
}