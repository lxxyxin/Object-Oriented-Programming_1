/*
�̸�, ���� �Է¹ް�
�����ؼ� ����ϴ� ���α׷�
*/
#include<iostream>
#include<string> //string Ŭ���� ����Ϸ��� �о�鿩����
using namespace std;

int main()
{
	//���� ����
	string first;
	string last;
	string space = " ";
	string fullName;
	//�̸�, �̴ϼ�, �� �Է¹ޱ�
	cout << "�̸�(first name) �Է��ϱ�: ";
	cin >> first;
	cout << "��(last name) �Է��ϱ�: ";
	cin >> last;
	//���� �����ڸ� ����ؼ� ���ڿ� ����
	fullName = first + space + space + last;
	//��ü �̸� ���
	cout << endl << "��ü �̸�(full name): " << fullName << endl;
	return 0;
}