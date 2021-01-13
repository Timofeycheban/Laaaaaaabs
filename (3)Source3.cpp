#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лабораторна робота №3
Задача №3
Описати функцію IsPrime (N) логічного типу, яка повертає True, якщо цілий параметр N (> 1) є простим числом, 
і False в іншому випадку (число, більше 1, називається простим, якщо воно не має позитивних дільників, крім 1 і самого себе).
Дано набір з 10 цілих чисел, більших 1. За допомогою функції IsPrime знайти кількість простих чисел в даному наборі.
Тестування
Вхідні дані	|	Вихідні дані
	n=2				true
	n=4				false
	n=3				true
	n=6				false
	n=11			true
*/
bool IsPrime(int n)
{	
		for (int i = 2; i < n ; i++) {
			if (n%i == 0) { return 0;}
		}
		return 1;
}
int main()
{
	int n, k = 0;
	for (int i = 0; i < 10; i++) 
	{
		cin >> n;
		if (IsPrime(n)) { k++; }
	}
	cout << boolalpha << "K=" << k << endl;
	return 0;
}
