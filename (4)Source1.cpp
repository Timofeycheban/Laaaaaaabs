#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
����������� �4 ������ �1
������� ���������� ������� Fact (N) ������� ����, ��� �������� �������� ���������
N! = 1 � 2 � ... � N
(N> 0 - �������� ������ ����). �� ��������� ���� ������� ��������� ��������� �'��� ����� �����.
*/
double Fact(int n);
int main() {

	int n;
	cin >> n;
	cout << Fact(n) << endl;
	return 0;
}
double Fact(int n)
{
	if (!n) { return 1; }
	return n * Fact(n - 1);
}
