#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
����������� ������ �3
������ �3
������� ������� IsPrime (N) �������� ����, ��� ������� True, ���� ����� �������� N (> 1) � ������� ������, 
� False � ������ ������� (�����, ����� 1, ���������� �������, ���� ���� �� �� ���������� �������, ��� 1 � ������ ����).
���� ���� � 10 ����� �����, ������ 1. �� ��������� ������� IsPrime ������ ������� ������� ����� � ������ �����.
����������
����� ���	|	������ ���
	n=2				true
	n=4				false
	n=3				true
	n=6				false
	n=11			true
*/
bool IsPrime(int n)
{	
		for (int i = 2; i < n ; i++) {
			if (n%i == 0) { return 0;}
		}
		return 1;
}
int main()
{
	int n, k = 0;
	for (int i = 0; i < 10; i++) 
	{
		cin >> n;
		if (IsPrime(n)) { k++; }
	}
	cout << boolalpha << "K=" << k << endl;
	return 0;
}
