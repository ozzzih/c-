// pe02-06.cpp --
//Q6. 거리를 매개변수로 전달받아 천문 단위로 환산하여 리턴하는 사용자 정의 함수를 main()함수가 호출하는 프로그램을 작성하시오.
// 프로그램은 사용자에게 거리를 광년으로 입력할 것을 요구해야 함.
//double형 변수 사용
#include <iostream>
using namespace std; 
double convert(double);
int main()
{
	double light_years, astronomical_unit;
	cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
	cin >> light_years;
	astronomical_unit = convert(light_years);
	cout << light_years << " 광년은 " << astronomical_unit << " 천문 단위입니다.\n";
    return 0;
}

double convert(double light_yr)
{
	double astro_unit;			// 천문 단위
	astro_unit = light_yr * 63240;		// 환산 공식
	return astro_unit;
}
