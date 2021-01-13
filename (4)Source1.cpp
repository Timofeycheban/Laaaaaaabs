#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лабораторна №4 Задача №1
Описати рекурсивну функцію Fact (N) дійсного типу, яка обчислює значення факторіала
N! = 1 · 2 · ... · N
(N> 0 - параметр цілого типу). За допомогою цієї функції обчислити факторіали п'яти даних чисел.
*/
double Fact(int n);
int main() {

	int n;
	cin >> n;
	cout << Fact(n) << endl;
	return 0;
}
double Fact(int n)
{
	if (!n) { return 1; }
	return n * Fact(n - 1);
}
