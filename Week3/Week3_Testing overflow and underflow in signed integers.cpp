#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int num1 = numeric_limits<int>::max();
	int num2 = numeric_limits<int>::min();

	cout << "부호 있는 정수의 최대값: " << num1 << endl;
	cout << "부호 있는 정수의 최소값: " << num2 << endl;

	num1 += 1;
	num2 -= 1;

	cout << "오버플로우가 일어난 num1 + 1의 값: " << num1 << endl;
	cout << "언더플로우가 일어난 num2 - 1의 값: " << num2 << endl;
	return 0;
}