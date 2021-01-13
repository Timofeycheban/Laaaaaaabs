#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
����������� ������ �3
������ �2
������� ������� Sign (X) ������ ����, ��� ������� ��� ������� ����� X ������� ��������: -1, ���� X <0; 0, ���� X = 0;
1, ���� X> 0. �� ��������� ���� ������� ������ �������� ������ Sign (A) + Sign (B) ��� ����� ������ ����� A � B.
����������
����� ���	|	������ ���
	a=0 b=0			0
	a=-2 b=0		-1
	a=2 b=2			2
	a=1 b=0			1
	a=1 b=-1		0
*/
int sign(int x) 
{
	if (x < 0) { x = -1; }
	else if (x == 0) { x = 0; }
	else { x = 1; }
	return x;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
	return 0;
}
