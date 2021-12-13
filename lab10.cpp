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
	cout << "Случайно сгенерированное число от 1 до 999:";

	int a[3] = { 0,0,0 }; //создаю массив и заполняю нулями
	int random; //переменная для случайных чисел


	for (int i = 0; i < 3; i++) { //цикл создания случайных чисел
		random = 1 + rand() % 9; //создание случайного числа
		for (int j = 0; j < 3; j++) { //цикл проверки массива на совпадение
			if (random == a[j]) { //условие совпадения
				while (random == a[j]) { //цикл для создания нового случайного числа, пока оно не будет повторяться
					random = 1 + rand() % 9;
				}
			}
			else {
				continue; //если повтора нет, переходим к следующей итеграции
			}
		}
		a[i] = random; // присваивание рандомного числа элементу массива
	}

	for (int k = 0; k < 3; k++)

	{ //вывод массива на экран

		cout << a[k];
	}


	cout << " Для выхода из консоли нажмите любую клавишу";
	_getch();
	return 0;
}