#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <time.h>
#include<stdlib.h> 
#include <stdio.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	cout << "�������� ��������������� ����� �� 1 �� 999:";

	int a[3] = { 0,0,0 }; //������ ������ � �������� ������
	int random; //���������� ��� ��������� �����


	for (int i = 0; i < 3; i++) { //���� �������� ��������� �����
		random = 1 + rand() % 9; //�������� ���������� �����
		for (int j = 0; j < 3; j++) { //���� �������� ������� �� ����������
			if (random == a[j]) { //������� ����������
				while (random == a[j]) { //���� ��� �������� ������ ���������� �����, ���� ��� �� ����� �����������
					random = 1 + rand() % 9;
				}
			}
			else {
				continue; //���� ������� ���, ��������� � ��������� ���������
			}
		}
		a[i] = random; // ������������ ���������� ����� �������� �������
	}

	for (int k = 0; k < 3; k++)

	{ //����� ������� �� �����

		cout << a[k];
	}


	cout << " ��� ������ �� ������� ������� ����� �������";
	_getch();
	return 0;
}