#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
vЛаборторна робота №5 Задача№3
Напишіть програму, в якій створюються три об'єкти дійсного типу, середній бал студента у вільній пам'яті
введіть їх значення з консолі
знайдіть об’єм виділеної пам’яті 
роздрукуйте значення середнього балу кожного студента.
Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.
*/
int main() {

	double *a = new double;
	double *b = new double;
	double *c = new double;
    
	cin >> *a >> *b >> *c;
	cout << "A=" << *a << "\t Size a=" << sizeof(*a) << endl;
	cout << "B=" << *b << "\t Size b=" << sizeof(*b) << endl;
	cout << "C=" << *c << "\t Size c=" << sizeof(*c) << endl;
    delete a;
	a = 0;
	delete b;
	b = 0;
	delete c;
	c = 0;
    
	double *k = new double;
	for (int i = 0; i < 3; i++)
	{
		cin >> *k;
		cout << "Size k=" << sizeof(*k) << endl;
		cout << "K=" << *k << endl;
		delete k;
		k = 0;
	}
	*/
    
	return 0;
}
