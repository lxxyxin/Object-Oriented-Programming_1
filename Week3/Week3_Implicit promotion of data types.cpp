#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	bool x = true;
	char y = 'A';
	short z = 14;
	float t = 24.5;

	cout << "x + 100�� �ڷ���: " << typeid(x + 100).name() << endl;
	cout << "x + 100�� ��: " << x + 100 << endl << endl;

	cout << "y + 1000�� �ڷ���: " << typeid(y + 1000).name() << endl;
	cout << "y + 1000�� ��: " << y + 1000 << endl << endl;

	cout << "z * 100�� �ڷ���: " << typeid(z * 100).name() << endl;
	cout << "z * 100�� ��: " << z * 100 << endl << endl;
	
	cout << "t + 15000.2�� �ڷ���: " << typeid(t + 15000.2).name() << endl;
	cout << "t +15000.2�� ��: " << t + 15000.2 << endl;
	return 0;
}