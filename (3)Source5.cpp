#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
����������� ������ �3
������ �5
������� ������� Calc (A, B, Op) ������� ����, �� ������ ��� ����������� ������� ������� A �� B ���� � ������������ �������� � ������� �� ���������.
��� �������� ����������� ����� ���������� Op: 1 - ��������, 2 - ��������, 3 - ������, ���� �������� - ���������.
�� ��������� Calc �������� ��� ����� A � B ��������, �� ������������ ������ ������ N1, N2, N3.
����������
		����� ���		|		������ ���
	a=4 b=2 n=1;2;3				2	8	6
	a=6 b=3 n=1;2;3				3	18	2
	a=2 b=2 n=1;2;4				0	1	4
	a=8 b=4 n=1;2;3				4	2	2
	a=2 b=4 n=1;3;4				-2	0.5	6
*/
double Calc(double a, double b, int Op) 
{
	if (Op == 1) { return a - b; }
	if (Op == 2) { return a*b; }
	if (Op == 3) { return a/b; }
	else { return a + b; }
}
int main()
{
	int a, b, n;
	cin >> a >> b;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		cout << Calc(a, b, n) << endl;
	}
	return 0;
}
