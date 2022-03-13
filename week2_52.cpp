/*
이름, 성을 입력받고
결합해서 출력하는 프로그램
*/
#include<iostream>
#include<string> //string 클래스 사용하려면 읽어들여야함
using namespace std;

int main()
{
	//변수 선언
	string first;
	string last;
	string space = " ";
	string fullName;
	//이름, 이니셜, 성 입력받기
	cout << "이름(first name) 입력하기: ";
	cin >> first;
	cout << "성(last name) 입력하기: ";
	cin >> last;
	//결합 연산자를 사용해서 문자열 연결
	fullName = first + space + space + last;
	//전체 이름 출력
	cout << endl << "전체 이름(full name): " << fullName << endl;
	return 0;
}