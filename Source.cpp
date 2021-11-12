#include <iostream>
#include <ctime>
#include "stdlib.h"

#define reset "\x1b[0m"

using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] �������� ����\n\n";
	cout << "[1] ������\n";
	cout << "[2] �������\n";
	cout << "[3] �������\n";
	cout << "[4] ���������\n\n";
	int colorx, color0, color, color1;

	cout << "[+] �������� ���� ��� ��������: ";
	cin >> colorx;
	cout << "[+] �������� ���� ��� ������: ";
	cin >> color0;
	

	if (colorx == 1) {
		color = 43;
	}
	else if (colorx == 2) {
		color = 44;
	}
	else if (colorx == 3) {
		color = 45;
	}
	else if (colorx == 4) {
		color = 46;
	}

	if (color0 == 1) {
		color1 = 43;
	}
	else if (color0 == 2) {
		color1 = 44;
	}
	else if (color0 == 3) {
		color1 = 45;
	}
	else if (color0 == 4) {
		color1 = 46;
	}

	cout << "[ + ] ������� ����:\n������ �� ������� ������ �� ��������� ������ ����  ����� (���� ������ ��������, ������ ������ ������).\n";
	cout << "������, ����������� � ���  ����� ������ �� ���������, ����������� ��� ���������, ����������.������ ��� ������ �����, �������� ��������.\n\n";
	cout << "[1] ���� 3 �� 3 � �����\n";
	cout << "[2] ���� 3 �� 3 � �������\n";
	cout << "[3] ���� 4 �� 4 � �����\n";
	cout << "[4] ���� 4 �� 4 � �������\n";
	cout << "[5] ���� 5 �� 5 � �����\n";
	cout << "[6] ���� 5 �� 5 � �������\n\n";

	cout << "������ �� ����� ����� �� ������ ������ � � ���: ";
	int play;
	cin >> play;
	switch (play) {
	case 1: {
		srand(time(NULL));
		char pole[3][3]{ { '|', '|', '|'},  {'|', '|', '|',}, {'|', '|', '|'} };
		int a, b;
		int h = 0;
		bool playerWin = false, computerWin = false, noWin = false;
		bool isx = true;

		do {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (pole[i][j] == 'x')
					{
						cout << "\x1b[" << color << "m" << pole[i][j] << reset;
					}
					else if (pole[i][j] == 'o')
					{
						cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
					}
					else
					{
						cout << pole[i][j];
					}
				}
				cout << endl;
			}
			
			if (isx == true) {
				cout << "������� �������: ";
				cin >> a >> b;
				pole[a - 1][b - 1] = 'x';
				h++;
				isx = false;
			}
			else {


				if (h != 9) {
					do {
						a = rand() % 3;
						b = rand() % 3;


					} while (pole[a][b] != '|');
					pole[a][b] = 'o';
					h++;
					isx = true;
				}

			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x') ||


				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x') || // �� ���������
				(pole[2][0] == 'x' && pole[1][1] == 'x' && pole[0][2] == 'x')) {
				playerWin = true;
			}

			if ((pole[0][0] == 'o' && pole[0][1] == 'o' && pole[0][2] == 'o') || // �� �������
				(pole[1][0] == 'o' && pole[1][1] == 'o' && pole[1][2] == 'o') ||
				(pole[2][0] == 'o' && pole[2][1] == 'o' && pole[2][2] == 'o') ||


				(pole[0][0] == 'o' && pole[1][0] == 'o' && pole[2][0] == 'o') || // �� ��������
				(pole[0][1] == 'o' && pole[1][1] == 'o' && pole[2][1] == 'o') ||
				(pole[0][2] == 'o' && pole[1][2] == 'o' && pole[2][2] == 'o') ||


				(pole[0][0] == 'o' && pole[1][1] == 'o' && pole[2][2] == 'o') || // �� ���������
				(pole[2][0] == 'o' && pole[1][1] == 'o' && pole[0][2] == 'o')) {
				computerWin = true;

			}
			if (playerWin == false && computerWin == false && h == 9) {
				noWin = true;

			}


			system("cls");
		} while (playerWin == false && computerWin == false && noWin == false);
		if (playerWin == true) {
			cout << "����� �������! ����������� :)";
		}
		if (computerWin == true) {
			cout << "��������� �������! ��� :(";
		}
		if (noWin == true) {
			cout << "�����!";
		}
	}
		  break;



	case 2: {
		{
			srand(time(NULL));
			char pole[3][3]{ { '|', '|', '|'},  {'|', '|', '|',}, {'|', '|', '|'} };
			int x, y;
			int h = 0;
			bool isX = true;

			bool playerWin = false, player1Win = false, noWin = false;

			do {
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (pole[i][j] == 'x')
						{
							cout << "\x1b[" << color << "m" << pole[i][j] << reset;
						}
						else if (pole[i][j] == 'o')
						{
							cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
						}
						else
						{
							cout << pole[i][j];
						}
					}
					cout << endl;
				}
				if (isX == true) {
					cout << "������� ������� 1 �����: ";
					cin >> x >> y;
					pole[x - 1][y - 1] = 'x';
					h++;
					isX = false;

				}
				else {

					if (h != 9) {
						cout << "������� ������� 2 �����: ";
						cin >> x >> y;
						pole[x - 1][y - 1] = 'o';
						h++;
						isX = true;

					}

				}

				if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x') || // �� �������
					(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x') ||
					(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x') ||


					(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x') || // �� ��������
					(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x') ||
					(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x') ||


					(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x') || // �� ���������
					(pole[2][0] == 'x' && pole[1][1] == 'x' && pole[0][2] == 'x')) {
					playerWin = true;
				}

				if ((pole[0][0] == 'o' && pole[0][1] == 'o' && pole[0][2] == 'o') || // �� �������
					(pole[1][0] == 'o' && pole[1][1] == 'o' && pole[1][2] == 'o') ||
					(pole[2][0] == 'o' && pole[2][1] == 'o' && pole[2][2] == 'o') ||


					(pole[0][0] == 'o' && pole[1][0] == 'o' && pole[2][0] == 'o') || // �� ��������
					(pole[0][1] == 'o' && pole[1][1] == 'o' && pole[2][1] == 'o') ||
					(pole[0][2] == 'o' && pole[1][2] == 'o' && pole[2][2] == 'o') ||


					(pole[0][0] == 'o' && pole[1][1] == 'o' && pole[2][2] == 'o') || // �� ���������
					(pole[2][0] == 'o' && pole[1][1] == 'o' && pole[0][2] == 'o')) {
					player1Win = true;

				}
				if (playerWin == false && player1Win == false && h == 9) {
					noWin = true;

				}


				system("cls");
			} while (playerWin == false && player1Win == false && noWin == false);
			if (playerWin == true) {
				cout << " ������ ����� �������! ����������� :)";
			}
			if (player1Win == true) {
				cout << " ������ ����� �������! ����������� :)";
			}
			if (noWin == true) {
				cout << "�����!";
			}
		} break;
	}

	case 3: { { srand(time(NULL));
		char pole[4][4]{ { '|', '|', '|','|' },  {'|', '|', '|', '|' }, {'|', '|', '|', '|' }, {'|', '|', '|', '|' } };
		int c, d;
		int h = 0;
		bool playerWin = false, computerWin = false, noWin = false;
		bool check = true;

		do {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (pole[i][j] == 'x')
					{
						cout << "\x1b[" << color << "m" << pole[i][j] << reset;
					}
					else if (pole[i][j] == 'o')
					{
						cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
					}
					else
					{
						cout << pole[i][j];
					}
				}
				cout << endl;
			}
			if (check == true) {
				cout << "������� �������: ";
				cin >> c >> d;
				pole[c - 1][d - 1] = 'x';
				h++;
				check = false;
			}
			else {


				if (h != 16) {
					do {
						c = rand() % 4;
						d = rand() % 4;


					} while (pole[c][d] != '|');
					pole[c][d] = 'o';
					h++;
					check = true;
				}

			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x' && pole[3][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x') || // �� ���������
				(pole[3][0] == 'x' && pole[2][1] == 'x' && pole[1][2] == 'x' && pole[0][3] == 'x')) {
				playerWin = true;
			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x') && pole[3][0] == 'x' || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x') || // �� ���������
				(pole[3][0] == 'x' && pole[2][1] == 'x' && pole[1][2] == 'x' && pole[0][3] == 'x')) {
				computerWin = true;

			}
			if (playerWin == false && computerWin == false && h == 16) {
				noWin = true;

			}


			system("cls");
		} while (playerWin == false && computerWin == false && noWin == false);

		if (playerWin == true) {
			cout << "����� �������! ����������� :)";
		}
		else if (computerWin == true) {
			cout << "��������� �������! ��� :(";
		}
		else {
			cout << "�����!";
		}

		} break;
	}


	case 4: { { srand(time(NULL));
		char pole[4][4]{ { '|', '|', '|','|' },  {'|', '|', '|', '|' }, {'|', '|', '|', '|' }, {'|', '|', '|', '|' } };
		int s, k;
		int h = 0;
		bool playerWin = false, playerWin1 = false, noWin = false;
		bool check1 = true;

		do {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (pole[i][j] == 'x')
					{
						cout << "\x1b[" << color << "m" << pole[i][j] << reset;
					}
					else if (pole[i][j] == 'o')
					{
						cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
					}
					else
					{
						cout << pole[i][j];
					}
				}
				cout << endl;
			}
			if (check1 == true) {
				cout << "������� ������� 1 �����: ";
				cin >> s >> k;
				pole[s - 1][k - 1] = 'x';
				h++;
				check1 = false;

			}
			else {

				if (h != 16) {
					cout << "������� ������� 2 �����: ";
					cin >> s >> k;
					pole[s - 1][k - 1] = 'o';
					h++;
					check1 = true;

				}

			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x') && pole[3][0] == 'x' || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x') || // �� ���������
				(pole[3][0] == 'x' && pole[2][1] == 'x' && pole[1][2] == 'x' && pole[0][3] == 'x')) {
				playerWin = true;
			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x') && pole[3][0] == 'x' || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x') || // �� ���������
				(pole[3][0] == 'x' && pole[2][1] == 'x' && pole[1][2] == 'x' && pole[0][3] == 'x')) {
				playerWin1 = true;

			}
			if (playerWin == false && playerWin1 == false && h == 16) {
				noWin = true;

			}


			system("cls");
		} while (playerWin == false && playerWin1 == false && noWin == false);

		if (playerWin == true) {
			cout << "������� ����� �������! ����������� :)";
		}
		else if (playerWin1 == true) {
			cout << "������ �����  �������! ��� :(";
		}
		else {
			cout << "�����!";
		}

		} break;
	}
	case 5: { { srand(time(NULL));
		char pole[5][5]{ { '|', '|', '|','|','|' },  {'|', '|', '|', '|','|' }, {'|', '|', '|','|', '|' }, {'|', '|','|', '|', '|' },  {'|','|', '|', '|', '|' } };
		int c, d;
		int h = 0;
		bool playerWin = false, computerWin = false, noWin = false;
		bool check = true;

		do {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (pole[i][j] == 'x')
					{
						cout << "\x1b[" << color << "m" << pole[i][j] << reset;
					}
					else if (pole[i][j] == 'o')
					{
						cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
					}
					else
					{
						cout << pole[i][j];
					}
				}
				cout << endl;
			}
			if (check == true) {
				cout << "������� �������: ";
				cin >> c >> d;
				pole[c - 1][d - 1] = 'x';
				h++;
				check = false;
			}
			else {


				if (h != 25) {
					do {
						c = rand() % 5;
						d = rand() % 5;


					} while (pole[c][d] != '|');
					pole[c][d] = 'o';
					h++;
					check = true;
				}

			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x' && pole[0][4] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x' && pole[1][4] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x' && pole[2][4] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x' && pole[3][4] == 'x') ||
				(pole[4][0] == 'x' && pole[4][1] == 'x' && pole[4][2] == 'x' && pole[4][3] == 'x' && pole[4][4] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x' && pole[3][0] == 'x' && pole[4][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x' && pole[4][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x' && pole[4][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x' && pole[4][3] == 'x') ||
				(pole[0][4] == 'x' && pole[1][4] == 'x' && pole[2][4] == 'x' && pole[3][4] == 'x' && pole[4][4] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x' && pole[4][4] == 'x') || // �� ���������
				(pole[4][0] == 'x' && pole[3][1] == 'x' && pole[2][2] == 'x' && pole[1][3] == 'x' && pole[0][4] == 'x')) {
				playerWin = true;
			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x' && pole[0][4] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x' && pole[1][4] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x' && pole[2][4] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x' && pole[3][4] == 'x') ||
				(pole[4][0] == 'x' && pole[4][1] == 'x' && pole[4][2] == 'x' && pole[4][3] == 'x' && pole[4][4] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x' && pole[3][0] == 'x' && pole[4][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x' && pole[4][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x' && pole[4][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x' && pole[4][3] == 'x') ||
				(pole[0][4] == 'x' && pole[1][4] == 'x' && pole[2][4] == 'x' && pole[3][4] == 'x' && pole[4][4] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x' && pole[4][4] == 'x') || // �� ���������
				(pole[4][0] == 'x' && pole[3][1] == 'x' && pole[2][2] == 'x' && pole[1][3] == 'x' && pole[0][4] == 'x')) {
				computerWin = true;

			}
			if (playerWin == false && computerWin == false && h == 25) {
				noWin = true;

			}


			system("cls");
		} while (playerWin == false && computerWin == false && noWin == false);

		if (playerWin == true) {
			cout << "����� �������! ����������� :)";
		}
		else if (computerWin == true) {
			cout << " ��������� �������! ��� :(";
		}
		else {
			cout << "�����!";
		}

		} break;
	}
	case 6: { { srand(time(NULL));
		char pole[5][5]{ { '|', '|', '|','|','|' },  {'|', '|', '|', '|','|' }, {'|', '|', '|','|', '|' }, {'|', '|','|', '|', '|' },  {'|','|', '|', '|', '|' } };
		int s, k;
		int h = 0;
		bool playerWin = false, player1Win = false, noWin = false;
		bool check1 = true;

		do {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (pole[i][j] == 'x')
					{
						cout << "\x1b[" << color << "m" << pole[i][j] << reset;
					}
					else if (pole[i][j] == 'o')
					{
						cout << "\x1b[" << color1 << "m" << pole[i][j] << reset;
					}
					else
					{
						cout << pole[i][j];
					}
				}
				cout << endl;
			}
				
			if (check1 == true) {
				cout << "������� ������� 1 �����: ";
				cin >> s >> k;
				pole[s - 1][k - 1] = 'x';
				h++;
				check1 = false;

			}
			else {

				if (h != 25) {
					cout << "������� ������� 2 �����: ";
					cin >> s >> k;
					pole[s - 1][k - 1] = 'o';
					h++;
					check1 = true;

				}

			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x' && pole[0][4] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x' && pole[1][4] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x' && pole[2][4] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x' && pole[3][4] == 'x') ||
				(pole[4][0] == 'x' && pole[4][1] == 'x' && pole[4][2] == 'x' && pole[4][3] == 'x' && pole[4][4] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x' && pole[3][0] == 'x' && pole[4][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x' && pole[4][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x' && pole[4][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x' && pole[4][3] == 'x') ||
				(pole[0][4] == 'x' && pole[1][4] == 'x' && pole[2][4] == 'x' && pole[3][4] == 'x' && pole[4][4] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x' && pole[4][4] == 'x') || // �� ���������
				(pole[4][0] == 'x' && pole[3][1] == 'x' && pole[2][2] == 'x' && pole[1][3] == 'x' && pole[0][4] == 'x')) {
				playerWin = true;
			}

			if ((pole[0][0] == 'x' && pole[0][1] == 'x' && pole[0][2] == 'x' && pole[0][3] == 'x' && pole[0][4] == 'x') || // �� �������
				(pole[1][0] == 'x' && pole[1][1] == 'x' && pole[1][2] == 'x' && pole[1][3] == 'x' && pole[1][4] == 'x') ||
				(pole[2][0] == 'x' && pole[2][1] == 'x' && pole[2][2] == 'x' && pole[2][3] == 'x' && pole[2][4] == 'x') ||
				(pole[3][0] == 'x' && pole[3][1] == 'x' && pole[3][2] == 'x' && pole[3][3] == 'x' && pole[3][4] == 'x') ||
				(pole[4][0] == 'x' && pole[4][1] == 'x' && pole[4][2] == 'x' && pole[4][3] == 'x' && pole[4][4] == 'x') ||

				(pole[0][0] == 'x' && pole[1][0] == 'x' && pole[2][0] == 'x' && pole[3][0] == 'x' && pole[4][0] == 'x') || // �� ��������
				(pole[0][1] == 'x' && pole[1][1] == 'x' && pole[2][1] == 'x' && pole[3][1] == 'x' && pole[4][1] == 'x') ||
				(pole[0][2] == 'x' && pole[1][2] == 'x' && pole[2][2] == 'x' && pole[3][2] == 'x' && pole[4][2] == 'x') ||
				(pole[0][3] == 'x' && pole[1][3] == 'x' && pole[2][3] == 'x' && pole[3][3] == 'x' && pole[4][3] == 'x') ||
				(pole[0][4] == 'x' && pole[1][4] == 'x' && pole[2][4] == 'x' && pole[3][4] == 'x' && pole[4][4] == 'x') ||


				(pole[0][0] == 'x' && pole[1][1] == 'x' && pole[2][2] == 'x' && pole[3][3] == 'x' && pole[4][4] == 'x') || // �� ���������
				(pole[4][0] == 'x' && pole[3][1] == 'x' && pole[2][2] == 'x' && pole[1][3] == 'x' && pole[0][4] == 'x')) {
				player1Win = true;

			}
			if (playerWin == false && player1Win == false && h == 25) {
				noWin = true;

			}


			system("cls");
		} while (playerWin == false && player1Win == false && noWin == false);

		if (playerWin == true) {
			cout << " ������ ����� �������! ����������� :)";
		}
		else if (player1Win == true) {
			cout << " ������  ����� �������! ��� :(";
		}
		else {
			cout << "�����!";
		}

		} break;
	}


	}
		  int _; cin >> _;
		  return 0;

	}


	
	
