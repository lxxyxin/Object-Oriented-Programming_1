#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	//변수 선언
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	//이름, 수입, 지출 입력
	cout << "이름, 수입, 지출: ";
	cin >> name1 >> plus1 >> minus1;

	cout << "이름, 수입, 지출: ";
	cin >> name2 >> plus2 >> minus2;

	cout << "이름, 수입, 지출: ";
	cin >> name3 >> plus3 >> minus3;

	//소숫점 셋째자리까지 출력 및 빈공간 ' '으로 출력하도록 설정
	cout << fixed << setprecision(3) << setfill(' ') << endl;

	//setw로 공간 지정 및 정렬
	cout << setw(10) << left << "이름";
	cout << setw(10) << internal << "수입";
	cout << setw(10) << right << "지출" << endl;

	cout << setw(10) << left << name1;
	cout << setw(10) << internal << plus1;
	cout << setw(10) << right << minus1 << endl;

	cout << setw(10) << left << name2;
	cout << setw(10) << internal << plus2;
	cout << setw(10) << right << minus2 << endl;

	cout << setw(10) << left << name3;
	cout << setw(10) << internal << plus3;
	cout << setw(10) << right << minus3 << endl << endl;

	//static_cast 사용하여 자료형 int로 변환 후 연산
	cout << "잔액 = " << static_cast<int>(plus1) + minus1 << " (" << name1 << ")" << endl;
	cout << "잔액 = " << static_cast<int>(plus2) + minus2 << " (" << name2 << ")" << endl;
	cout << "잔액 = " << static_cast<int>(plus3) + minus3 << " (" << name3 << ")" << endl << endl;
	//static_cast 사용하여 자료형 double로 변환 후 연산
	cout << "평균 잔액 = " << ((static_cast<double>(plus1) + minus1) + (static_cast<double>(plus2) + minus2) + (static_cast<double>(plus3) + minus3)) / 3;
	return 0;

}