#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
����������� ������ �3
������ �4
������� ������� Power1 (A, B) ������� ����, ��� ��������� �������� AB �� �������� AB = exp (B � ln (A)) (��������� A � B - ����). 
� ��� ��������� ��� ����������� ��������� A ������� ������� 0. � ��������� ���� ������� ������ ������ AP, BP, CP, ���� ���� ����� P, A, B, C.
����������
����� ���		|		������ ���
a=3 b=4 c=5 p=2		9.00 16.00 25.00
a=2 b=3 c=4 p=2		4.00 9.00 16.00
a=2 b=3 c=4 p=3		8.00 27.00 64.00
a=3 b=4 c=5 p=1		3.00 4.00 5.00
a=2 b=2 c=2 p=2		4.00 4.00 4.00
*/
double Power1(double a, double b) 
{
	if (a == 0) { return 0; }
	return exp(b*log(a));
}
int main()
{
	int p, a, b, c;
	cin >> a >> b >> c >> p;
	cout << fixed;
	cout.precision(2);
	cout << Power1(a, p) << endl;
	cout << Power1(b, p) << endl;
	cout << Power1(c, p) << endl;
	return 0;
}
