﻿#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лабораторна №4 Задача №3
Описати рекурсивну функцію PowerN (X, N) дійсного типу, яка знаходить значення N-го степеня числа X за формулами:
X 0 = 1,
X N = (X^(N/2))^2 при парних N> 0,
X N = X·X^(N-1) при непарних N> 0,
X N = 1/X^-N при N <0
(X ≠ 0 - дійсне число, N - ціле; у формулі для парних N повинна використовуватися операція цілочисельного ділення).
За допомогою цієї функції знайти значення X N для даного X при п'яти даних значеннях N.
*/
double PowerN(double x, int n);
int main() {
	double x;
	int n;
	cin >> x;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		cout << PowerN(x, n) << endl;
	}
	return 0;
}
double PowerN(double x, int n)
{
	if (!n) { return 1; }
	if (n < 0) { return x * PowerN(1 / x, -n + 1); }
	else if (n % 2 == 0) { return  PowerN(x*x, n/2); }
	else { return x * PowerN(x, n - 1); }
}
