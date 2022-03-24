#include<iostream>
using namespace std;

int main()
{
	unsigned int a; //변수 선언(양의 정수)

	cout << "양의 정수 입력: ";
	cin >> a;

	cout << "입력한 정수 " << a << endl;
	cout << "첫 번째 자리수 추출: " << a % 10; //a를 10으로 나눈 나머지 == 일의 자리수
	return 0;
}