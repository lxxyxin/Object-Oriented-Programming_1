#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	int x = 123;
	long y = 140;
	double z = 114.56;

	cout << "x + y�� �ڷ���: " << typeid(x + y).name() << endl;
	cout << "x + y�� ��: " << x + y << endl << endl;

	cout << "x + y + z�� �ڷ���: " << typeid(x + y + z).name() << endl;
	cout << "x + y + z�� ��: " << x + y + z << endl;
	return 0;
}