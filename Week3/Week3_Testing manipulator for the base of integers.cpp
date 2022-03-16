/*
정수를 여러 진법(10진법, 8진법, 16진법)으로
출력하는 프로그램
*/

#include<iostream>
using namespace std;

int main() 
{
	int x = 1237;

	cout << "x의 10진수 값: " << x << endl;
	cout << "x의 8진수 값: " << oct << x << endl;
	cout << "x의 16진수 값: " << hex << x << endl << endl;

	cout << "x의 10진수 값: " << showbase << dec << x << endl;
	cout << "x의 8진수 값: " << showbase << oct << x << endl;
	cout << "x의 16진수 값: " << showbase << hex << x;
	return 0;
}