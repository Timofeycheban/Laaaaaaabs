#include<iostream>
#include<string>
#include<string>
using namespace std;
/*
����������� ������ �3
������ �1
������� ������� PowerA3 (A, B), ��� �������� ����� ������ ����� A � ������� �� � ����� B (A - �������, B - �������� ��������; ������ ��������� � �������).
�� ��������� ���� ������� ������ ���� ������ �'��� ����� �����.
����������
����� ���	|	������ ���
	a=1				b=1
	a=2				b=8
	a=3				b=27
	a=4				b=64
	a=5				b=125
*/
void PowerA3(double a, double &b) 
{
	b = a * a *a;
}
int main()
{
	double a, b;
	for (int i = 0; i < 5; i++) 
	{
		cin >> a;
		PowerA3(a, b);
		cout << b << endl;
	}
	return 0;
}
