// pe02-07.cpp -- 
//Q7. �ð� ���� �� ���� �Է��� ����ڿ��� ��û�ϴ� ���α׷��� �ۼ��϶�.
//main()�Լ��� �� �ΰ��� void�� �Լ��� �����Ѵ�.

#include <iostream>
using namespace std; 

void hourMin(int hour, int min);
void main()
{
	int min, hour;

	cout << "�ð� ���� �Է��Ͻÿ�: ";
	cin >> hour;
	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> min;

	hourMin(hour, min);
}

void hourMin(int hour, int min)
{
	cout << "�ð�: " << hour << ":" << min;
}
