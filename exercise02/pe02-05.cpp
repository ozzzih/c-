// pe02-05.cpp --
//Q5. 섭씨 온도를 매개변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 프로그램을 작성하시오.
//프로그램은 섭씨 온도로 입력할 것을 요구해야 함.
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double Celsius, Fahrenheit;
	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
	cin >> Celsius;
	Fahrenheit = convert(Celsius);
	cout << "섭씨 " << Celsius << "도는 화씨 " << Fahrenheit << "도입니다.\n";
    return 0;
}

double convert(double Cel)
{
	double Fah;			// 화씨 온도
	Fah = 1.8 * Cel + 32.0;		// 환산 공식
	return Fah;
}
