#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
���������� ������ �5 ������5
������� ������� Power23(N, N2, N3) ��� ������ �������� � ���� ������ ������ �����   N, ��� �� ������� ���������. 
�����! �������� ��������� N2 � N3 ����������� �� ��������.
�� ��������� ������� Power23(N, N2, N3) ������ � ������� �������� � ���� ���� ����� �����.
*/
void Power23(int n, int *n2, int *n3);
int main() {
	int n, m, k;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		Power23(n, &m, &k);
		cout <<n<<"\t"<< m << "\t" << k << endl;
	}
	return 0;
}
void Power23(int n, int *n2, int *n3) {
	*n2 = n * n;
	*n3 = n * n * n;
}
