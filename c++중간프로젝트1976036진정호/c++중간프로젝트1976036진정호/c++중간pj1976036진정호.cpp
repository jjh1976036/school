#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

class Baseball_Game  // 클래스 선언
{
	int Num[10];
	int a, b, c;
	int Strike = 0, Ball = 0;

public:
	Baseball_Game();
	bool Start(int* input);
};

Baseball_Game::Baseball_Game()
{
	Strike = 0, Ball = 0;

	for (int i = 0; i < 10; i++)   // 0 ~ 9 까지의 수를 할당
	{ 
		Num[i] = i;
	}

	srand((unsigned int)time(0));

	for (int i = 0; i < 99; i++) { 
		b = rand() % 10;
		c = rand() % 10;

		a = Num[b]; // 스왑
		Num[b] = Num[c];
		Num[c] = a;
	}
}

bool Baseball_Game::Start(int* input) // 부울함수 사용
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (Num[i] == input[j]) { // iNum과 user가 입력한 값들이 같은지 확인
				if (i == j) {
					Strike++; // 자리수랑 숫자가 모두 같으므로 Strike
				}
				else {
					Ball++; // 자리수는 다르지만 숫자는 같으므로 ball
				}
			}
		}
	}

	if (Strike == 3) {
		cout << "맞췄습니다." << endl;
		cout << "계속하려면 1, 종료하려면 0을 입력하세요." << endl;
		int regame;
		cin >> regame;
		switch (regame)
		{
		case 0:
			return 1;

		case 1:
			Strike = 0;
			Ball = 0;
			system("cls");

			srand((unsigned int)time(0));

			for (int i = 0; i < 99; i++) { 
				b = rand() % 10;
				c = rand() % 10;

				a = Num[b]; // 스왑
				Num[b] = Num[c];
				Num[c] = a;
			}
			return Baseball_Game::Start(input);
			

		default:
			cout << "번호를 잘못 입력했습니다." << endl;
			return 0;
		}
	}
	else {
		cout << "Strike : " << Strike << "      Ball : " << Ball << endl;
		Strike = 0; // 다시 게임 시작 및 초기화
		Ball = 0;
		return 0;
	}
}

int main()
{
	Baseball_Game bb;
	int input[3] = {};

	while (1)
	{
		cout << "0 ~ 9 사이의 숫자 중 3개 입력 하시오." << endl;
		cin >> input[0] >> input[1] >> input[2]; // 입력 받기

		if (bb.Start(input)) // 멤버함수 사용
			break;
	}

}

