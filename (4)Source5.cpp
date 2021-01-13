#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int t= 0;
/*
Лабораторна №4 Задача №5
Описати рекурсивну функцію Combin1 (N, K) цілого типу, яка знаходить C (N, K) - число поєднань з N елементів по K - за допомогою рекурентного співвідношення:
C (N, 0) = C (N, N) = 1,
C (N, K) = C (N - 1, K) + C (N - 1, K - 1) при 0 <K <N.
Параметри функції - цілі числа; N> 0, 0 ≤ K ≤ N. Дано число N і п'ять різних значень K.
Вивести числа C (N, K) разом з кількістю рекурсивних викликів функції Combin1, що необхідні для їх знаходження.
*/
int Combin1(int n, int k);
int main() {
	int n, k, m;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		m = t;
		cout << Combin1(n, k) << " T=" << t << endl;
		t = t - m;
	}
	return 0;
}
int Combin1(int n, int k)
{
	t++;
	if (!k || k == n) { return 1; };
	return Combin1(n - 1, k) + Combin1(n - 1, k - 1);
}
