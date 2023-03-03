// pe02-03.cpp 
//Q3. 실행 결과가 다음과 같은 프로그램을 작성하시오.
//다만, main() 함수를 포함하여 세 개의 사용자 정의 함수를 사용해야 한다.
//user1 두 번, user2 두 번 호출
#include <iostream>
using namespace std;
void user1();
void user2();
int main()
{
	user1();
	user1();
	user2();
	user2();
	return 0;
}

void user1()
{
	cout << "Three blind mice\n";
}

void user2()
{
	cout << "See how they run \n";
}
