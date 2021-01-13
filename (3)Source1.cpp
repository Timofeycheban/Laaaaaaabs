#include<iostream>
#include<string>
#include<string>
using namespace std;
/*
Лабораторна робота №3
Задача №1
Описати функцію PowerA3 (A, B), яка обчислює третю степінь числа A і повертає її в змінній B (A - вхідний, B - вихідний параметр; обидва параметри є дійсними).
За допомогою цієї функції знайти треті ступені п'яти даних чисел.
Тестування
Вхідні дані	|	Вихідні дані
	a=1				b=1
	a=2				b=8
	a=3				b=27
	a=4				b=64
	a=5				b=125
*/
void PowerA3(double a, double &b) 
{
	b = a * a *a;
}
int main()
{
	double a, b;
	for (int i = 0; i < 5; i++) 
	{
		cin >> a;
		PowerA3(a, b);
		cout << b << endl;
	}
	return 0;
}
