#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a; //���� ����
	
	//�ε� �Ҽ��� �Է�
	cout << "�ε� �Ҽ��� �Է�: ";
	cin >> a;
	cout << endl;
	//�Ҽ��� ��� ����
	cout << fixed << setprecision(2); 
	//���� �κа� �Ҽ� �κ� ���� ���
	cout << "���� ��: " << a << endl;
	cout << "���� �κ�: " << static_cast<int>(a) << endl;
	cout << "�Ҽ��� �Ʒ� �κ�: " << a - static_cast<int>(a) << endl;
	return 0;
}