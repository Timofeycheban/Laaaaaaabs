#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лаборторна робота №5 Задача№4
Напишіть програму, яка створює витік пам'яті.
Збільшіть швидкість витоку пам'яті за допомогою створення об'єктів більшого розміру. 
Поясніть як виправити програму.
*/
int main() {
	int *p = new int(5);
	while (0 != 1) 
    {
		p = new int;
	}
	return 0;
}
