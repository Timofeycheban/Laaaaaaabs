#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лаборторна робота №5 Задача№1
Напишіть програму, в якій оголошуються ціле Age і вказівник на ціле pAge.
Задайте адресу цілого вказівнику. 
За допомогою вказівника встановіть значення цілої змінної 25. 
Виведіть значення змінної Age двома способами.
*/
int main() {
	int Age = 7;
	int *pAge=&Age;
	cout << Age << endl;
	*pAge = 25;
	cot << *pAge << endl;
	return 0;
}
