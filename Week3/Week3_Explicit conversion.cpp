#include<iostream>
using namespace std;

int main()
{
	double x = 23.56;
	int y = 30;

	cout << "ĳ������ ���� �ʴ� ���: " << x + y << endl;
	
	cout << "ĳ������ �� ���: " << static_cast<int>(x) + y;
	return 0;
}