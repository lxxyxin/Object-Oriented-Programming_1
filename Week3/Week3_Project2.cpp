#include<iostream>
using namespace std;

int main()
{
	unsigned int a; //���� ����(���� ����)

	cout << "���� ���� �Է�: ";
	cin >> a;

	cout << "�Է��� ���� " << a << endl;
	cout << "ù ��° �ڸ��� ����: " << a % 10; //a�� 10���� ���� ������ == ���� �ڸ���
	return 0;
}