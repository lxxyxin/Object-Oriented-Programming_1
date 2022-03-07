/*
자기소개 출력 프로그램
*/

#include<iostream>
#include<string> //string 사용을 위한 라이브러리

int main() 
{
	//string 타입 변수 Name에 이름 저장
	std::string Name = "\"이예린\"";
	
	//자기소개 출력
	std::cout << "안녕하세요 저는 " << Name << "입니다." << std::endl; //줄바꿈 endl 사용
	std::cout << "학번은 \"12203369\" 이고 본전공은 사학과입니다.\n"; //줄바꿈 \n 사용
	std::cout << "복수전공생이라 객체1을 수강하게 되었고 ";
	std::cout << "이 과목을 통해 기초적인 프로그래밍 실력을 향상 시키고 싶습니다." << std::endl;

	return 0;
}