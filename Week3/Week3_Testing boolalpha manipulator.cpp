/*
�� �ڷ����� boolalpha ������ ����ϱ�
*/

#include<iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	cout << "�⺻���� x�� ���: " << x << endl;
	cout << "�⺻���� y�� ���: " << y << endl;

	cout << "�����ڸ� ����� x�� ��: " << boolalpha << x << endl;
	cout << "y�� ��: " << y;
	return 0;
}