//pe02-04.cpp--
//Q4. 사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오.
//또한 그 프로그램은 화면에 사용자의 나이를 월수로 나타내로록 한다.

#include <iostream>
using namespace std;
int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "이때 당신의 나이를 월수로 나타낼 경우 " << age * 12 << "입니다." << endl;
	return 0;
}
