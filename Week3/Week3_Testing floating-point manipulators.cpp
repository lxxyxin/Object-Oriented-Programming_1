/*
�ε� �Ҽ��� �ڷ����� ���õ� �� ���� ������ ����ϱ�
*/

#include<iostream>
using namespace std;

int main()
{
	double x = 1237;
	double y = 12376745.5623;

	cout << "x�� ���� �Ҽ��� ����: " << fixed << x << endl;
	cout << "x�� ���� �Ҽ��� ����: " << showpoint << x << endl;

	cout << scientific;
	cout << "y�� ���� ǥ��� ����: " << y << endl;
	return 0;
}