/*
부동 소수점 자료형과 관련된 몇 가지 조정자 사용하기
*/

#include<iostream>
using namespace std;

int main()
{
	double x = 1237;
	double y = 12376745.5623;

	cout << "x의 고정 소수점 형식: " << fixed << x << endl;
	cout << "x의 고정 소수점 형식: " << showpoint << x << endl;

	cout << scientific;
	cout << "y의 과학 표기법 형식: " << y << endl;
	return 0;
}