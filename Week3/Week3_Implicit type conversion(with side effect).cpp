#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	int x;
	double y;

	x = 23.67;
	y = 130;

	cout << "x = 23.67�� �ڷ���: " << typeid(x = 23.67).name() << endl;
	cout << "�Ҵ� �� x�� ��: " << x << endl << endl;

	cout << "y = 130�� �ڷ���: " << typeid(y = 130).name() << endl;
	cout << "�Ҵ� �� y�� ��: " << y << endl;
	return 0;
}