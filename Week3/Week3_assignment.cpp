#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	//���� ����
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	//�̸�, ����, ���� �Է�
	cout << "�̸�, ����, ����: ";
	cin >> name1 >> plus1 >> minus1;

	cout << "�̸�, ����, ����: ";
	cin >> name2 >> plus2 >> minus2;

	cout << "�̸�, ����, ����: ";
	cin >> name3 >> plus3 >> minus3;

	//�Ҽ��� ��°�ڸ����� ��� �� ����� ' '���� ����ϵ��� ����
	cout << fixed << setprecision(3) << setfill(' ') << endl;

	//setw�� ���� ���� �� ����
	cout << setw(10) << left << "�̸�";
	cout << setw(10) << internal << "����";
	cout << setw(10) << right << "����" << endl;

	cout << setw(10) << left << name1;
	cout << setw(10) << internal << plus1;
	cout << setw(10) << right << minus1 << endl;

	cout << setw(10) << left << name2;
	cout << setw(10) << internal << plus2;
	cout << setw(10) << right << minus2 << endl;

	cout << setw(10) << left << name3;
	cout << setw(10) << internal << plus3;
	cout << setw(10) << right << minus3 << endl << endl;

	//static_cast ����Ͽ� �ڷ��� int�� ��ȯ �� ����
	cout << "�ܾ� = " << static_cast<int>(plus1) + minus1 << " (" << name1 << ")" << endl;
	cout << "�ܾ� = " << static_cast<int>(plus2) + minus2 << " (" << name2 << ")" << endl;
	cout << "�ܾ� = " << static_cast<int>(plus3) + minus3 << " (" << name3 << ")" << endl << endl;
	//static_cast ����Ͽ� �ڷ��� double�� ��ȯ �� ����
	cout << "��� �ܾ� = " << ((static_cast<double>(plus1) + minus1) + (static_cast<double>(plus2) + minus2) + (static_cast<double>(plus3) + minus3)) / 3;
	return 0;

}