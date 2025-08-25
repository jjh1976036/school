#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

class Baseball_Game  // Ŭ���� ����
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

	for (int i = 0; i < 10; i++)   // 0 ~ 9 ������ ���� �Ҵ�
	{ 
		Num[i] = i;
	}

	srand((unsigned int)time(0));

	for (int i = 0; i < 99; i++) { 
		b = rand() % 10;
		c = rand() % 10;

		a = Num[b]; // ����
		Num[b] = Num[c];
		Num[c] = a;
	}
}

bool Baseball_Game::Start(int* input) // �ο��Լ� ���
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (Num[i] == input[j]) { // iNum�� user�� �Է��� ������ ������ Ȯ��
				if (i == j) {
					Strike++; // �ڸ����� ���ڰ� ��� �����Ƿ� Strike
				}
				else {
					Ball++; // �ڸ����� �ٸ����� ���ڴ� �����Ƿ� ball
				}
			}
		}
	}

	if (Strike == 3) {
		cout << "������ϴ�." << endl;
		cout << "����Ϸ��� 1, �����Ϸ��� 0�� �Է��ϼ���." << endl;
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

				a = Num[b]; // ����
				Num[b] = Num[c];
				Num[c] = a;
			}
			return Baseball_Game::Start(input);
			

		default:
			cout << "��ȣ�� �߸� �Է��߽��ϴ�." << endl;
			return 0;
		}
	}
	else {
		cout << "Strike : " << Strike << "      Ball : " << Ball << endl;
		Strike = 0; // �ٽ� ���� ���� �� �ʱ�ȭ
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
		cout << "0 ~ 9 ������ ���� �� 3�� �Է� �Ͻÿ�." << endl;
		cin >> input[0] >> input[1] >> input[2]; // �Է� �ޱ�

		if (bb.Start(input)) // ����Լ� ���
			break;
	}

}

