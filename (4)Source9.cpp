#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int b = 0;
/*
Лабораторна №4 Задача №9
Описати рекурсивну функцію Palindrome (S) логічного типу, яка повертає True, 
якщо ціле S є паліндромом (Читається однаково зліва направо і справа наліво),
і False в іншому випадку. Оператор циклу в тілі функції не використовувати.
Вивести значення функції Palindrome для п'яти даних чисел.
*/
bool Palindrome(int s);
int main() {
	int a;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		cout << boolalpha << Palindrome(a) << endl;
		b = b - b;
	}
		return 0;
}
bool Palindrome(int s)
{

	if (s < 1) { return 0; }
	b = b * 10 + s % 10;
	if (b == s) { return 1; }
	else { return Palindrome(s / 10); }
}
