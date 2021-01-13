#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
Лаборторна робота №5 Задача№5
Опишіть функцію Power23(N, N2, N3) для пошуку квадрату і куба даного цілого числа   N, яка не повертає результат. 
Увага! Передачу параметрів N2 і N3 забезпечити за вказівкою.
За допомогою функції Power23(N, N2, N3) знайти і вивести квадрати і куби п’яти цілих чисел.
*/
void Power23(int n, int *n2, int *n3);
int main() {
	int n, m, k;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		Power23(n, &m, &k);
		cout <<n<<"\t"<< m << "\t" << k << endl;
	}
	return 0;
}
void Power23(int n, int *n2, int *n3) {
	*n2 = n * n;
	*n3 = n * n * n;
}
