#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int num1 = numeric_limits<int>::max();
	int num2 = numeric_limits<int>::min();

	cout << "��ȣ �ִ� ������ �ִ밪: " << num1 << endl;
	cout << "��ȣ �ִ� ������ �ּҰ�: " << num2 << endl;

	num1 += 1;
	num2 -= 1;

	cout << "�����÷ο찡 �Ͼ num1 + 1�� ��: " << num1 << endl;
	cout << "����÷ο찡 �Ͼ num2 - 1�� ��: " << num2 << endl;
	return 0;
}