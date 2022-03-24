#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a; //변수 선언
	
	//부동 소수점 입력
	cout << "부동 소수점 입력: ";
	cin >> a;
	cout << endl;
	//소수점 출력 고정
	cout << fixed << setprecision(2); 
	//정수 부분과 소수 부분 각각 출력
	cout << "원래 값: " << a << endl;
	cout << "정수 부분: " << static_cast<int>(a) << endl;
	cout << "소수점 아래 부분: " << a - static_cast<int>(a) << endl;
	return 0;
}