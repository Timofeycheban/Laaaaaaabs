#include<iostream>
#include<string>
#include<cmath>
double pi = 3.14;
using namespace std;
/*
������������ �6 ������3
C������: �������� ������� ��� ���������� ������� ����, ����� ���� � �ᒺ�� ���, ���� ������ ����� (������� �� ������� ���������, �������� ��������� �� ����������); ��������� ���� �������.
�� ��������� ������� �������� ������� ����, ����� ���� � �ᒺ� ��� �� ������ ������ ��������.
*/
void LSV(double r, double *l, double *s, double *v);
int main() {
	double r, l, s, v;
	for (int i = 0; i < 3; i++)
	{
		cin >> r;
		LSV(r, &l, &s, &v);
		cout << r << "\t" << l << "\t" << s << "\t" << v << endl;
	}
	return 0;
}
void LSV(double r, double *l, double *s, double *v) 
{
	*l = 2 * r * pi;
	*s = pi * r *r;
	*v = 4 * pi*r*r*r / 3;
}
