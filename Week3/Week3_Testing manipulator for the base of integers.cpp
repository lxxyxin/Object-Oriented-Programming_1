/*
������ ���� ����(10����, 8����, 16����)����
����ϴ� ���α׷�
*/

#include<iostream>
using namespace std;

int main() 
{
	int x = 1237;

	cout << "x�� 10���� ��: " << x << endl;
	cout << "x�� 8���� ��: " << oct << x << endl;
	cout << "x�� 16���� ��: " << hex << x << endl << endl;

	cout << "x�� 10���� ��: " << showbase << dec << x << endl;
	cout << "x�� 8���� ��: " << showbase << oct << x << endl;
	cout << "x�� 16���� ��: " << showbase << hex << x;
	return 0;
}