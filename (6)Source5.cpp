#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
������������ �6 ������5
������� � ����� ����� ��� ��'���� ������ ����, ��������� �� �������� �������� 10, 20, 30.
������ ��������� ����������� � ��������� ������� ��� �ᒺ��� � ������������� �������� (�������� �������� �����).
������� ����� ������, ������������ ���������.
*/
int main() {
	int *a = new int(10);
	int *b = new int(20);
	int *c = new int(30);
	int &ra = *a;
	int &rb = *b;
	int &rc = *c;
	ra *= 2;
	rb *= 2;
	rc *= 2;
	cout << *a << endl;
	cout << *b << endl;
	cout << *c << endl;
	delete a;
	a = 0;
	delete b;
	b = 0;
	delete c;
	c = 0;
	return 0;
}
