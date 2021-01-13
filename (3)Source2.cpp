#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лабораторна робота №3
Задача №2
Описати функцію Sign (X) цілого типу, яка повертає для дійсного числа X наступні значення: -1, якщо X <0; 0, якщо X = 0;
1, якщо X> 0. За допомогою цієї функції знайти значення виразу Sign (A) + Sign (B) для даних дійсних чисел A і B.
Тестування
Вхідні дані	|	Вихідні дані
	a=0 b=0			0
	a=-2 b=0		-1
	a=2 b=2			2
	a=1 b=0			1
	a=1 b=-1		0
*/
int sign(int x) 
{
	if (x < 0) { x = -1; }
	else if (x == 0) { x = 0; }
	else { x = 1; }
	return x;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
	return 0;
}
