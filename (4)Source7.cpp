#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лабораторна №4 Задача №7
Описати рекурсивну функцію GCD (A, B) цілого типу, яка знаходить найбільший спільний дільник (НСД, greatest common divisor) двох цілих позитивних чисел A і B,
використовуючи алгоритм Евкліда: НСД (A, B) = НСД (B, A mod B), B ≠ 0; НСД (A, 0) = A,
де «mod» позначає операцію взяття залишку від ділення.
За допомогою цієї функції знайти НСД (A, B), НCД (A, C), НCД (A, D), якщо дано числа A, B, C, D.
*/
int GCD(int a, int b);
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << GCD(a, b) << "\t" << GCD(a, c) << "\t" << GCD(a, d) << "\t" << endl;
	return 0;
}
int GCD(int a, int b) {
	if (!a) { return b; }
	if (!b) { return a; }
	if (a > b) { return GCD(a % b, b); }
	else { return GCD(a, b % a); }
}
