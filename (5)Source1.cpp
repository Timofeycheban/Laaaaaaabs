#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
���������� ������ �5 ������1
�������� ��������, � ��� ������������ ���� Age � �������� �� ���� pAge.
������� ������ ������ ���������. 
�� ��������� ��������� ��������� �������� ���� ����� 25. 
������� �������� ����� Age ����� ���������.
*/
int main() {
	int Age = 7;
	int *pAge=&Age;
	cout << Age << endl;
	*pAge = 25;
	cot << *pAge << endl;
	return 0;
}
