#include <iostream>
using namespace std;

void main()
{
	int x1, x2, x3; // нам известно что должны получиться три переменные
	int result = 0b0001'1011; // результат сжатия(27)
	int mask = 0b0000'0011; //маска для взятия двух последних символов


	x3 = result & mask; // 0001'1011 & 0000'0011 = 0000'0011; (3)
	result = result >> 2; // 0001'1011 >> 2 = 0000'0110;

	x2 = result & mask; // 0000'0110 & 0000'0011 = 0000'0010;
	result = result >> 2; // 0000'0001;
	x1 = result & mask; // 0000'0001 & 0000'0011;

	cout << "var1 = " << x1 << "\nvar2 = " << x2 << "\nvar3 = " << x3;

}