#include<iostream>
using namespace std;
void passByValue(int num)
{
	num = num+10;
	cout<<"Inside Function(Pass by Value):"<<num<<endl;
}

int main()
{
	int number=5;
	cout<<"Before Function Call:"<<number<<endl;
	passByValue(number);
	cout<<"After Function Call:"<<number<<endl;
	return 0;
}
