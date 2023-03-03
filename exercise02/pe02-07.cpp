// pe02-07.cpp -- 
//Q7. 시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램을 작성하라.
//main()함수는 이 두값을 void형 함수에 전달한다.

#include <iostream>
using namespace std; 

void hourMin(int hour, int min);
void main()
{
	int min, hour;

	cout << "시간 값을 입력하시오: ";
	cin >> hour;
	cout << "분 값을 입력하시오: ";
	cin >> min;

	hourMin(hour, min);
}

void hourMin(int hour, int min)
{
	cout << "시각: " << hour << ":" << min;
}
