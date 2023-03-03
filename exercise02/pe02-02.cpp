// pe02-02.cpp --
//Q2. 거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오.
// (1마일은 1.60934킬로미터이다.)
#include <iostream>
using namespace std;
int main()
{
	float miles, km;
	
	cout << "거리를 마일 단위로 입력하십시오: ";
	cin >> miles;
    km = miles * 1.60934;	// 마일을 킬로미터로 환산
	cout << miles << " 마일은 " << km << " 킬로미터입니다.\n";
	return 0;
}
