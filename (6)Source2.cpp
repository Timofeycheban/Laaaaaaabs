#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
������������ �6 ������2
�������: �������� ������� ��� ���������� ��������, ���� � ���������� �������� ������� ����� (������� �� ������� ���������, �������� ��������� �� ����������); ��������� ���� �������. 
�� ��������� ������� �������� �������, ��� � �������� �������� �������� �����.
*/
void Power23k(double n, double *n2, double *n3,double *k);
int main() 
{
	double n, t, p, k;
	for (int i = 0; i < 4; i++) 
	{
		cin >> n;
		Power23k(n, &t, &p, &k);
		cout << n << "\t" << t << "\t" << p << "\t" << k << endl;
	}
		return 0;
	}
void Power23k(double n, double *n2, double *n3, double *k)
{
	*n2 = n * n;
	*n3 = n * n * n;
	*k = 1 / n;
}
