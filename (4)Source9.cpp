#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int b = 0;
/*
����������� �4 ������ �9
������� ���������� ������� Palindrome (S) �������� ����, ��� ������� True, 
���� ���� S � ���������� (�������� �������� ���� ������� � ������ �����),
� False � ������ �������. �������� ����� � �� ������� �� ���������������.
������� �������� ������� Palindrome ��� �'��� ����� �����.
*/
bool Palindrome(int s);
int main() {
	int a;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		cout << boolalpha << Palindrome(a) << endl;
		b = b - b;
	}
		return 0;
}
bool Palindrome(int s)
{

	if (s < 1) { return 0; }
	b = b * 10 + s % 10;
	if (b == s) { return 1; }
	else { return Palindrome(s / 10); }
}
