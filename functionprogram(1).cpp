#include<iostream>
using namespace std;
void subtract(int num1)
{
	num1= num1-10;
	cout<<"Inside Function(subtract):"<<num1<<endl;	
}
void multiply(int num2)
{
	num2= num2*10;
	cout<<"Inside Function(multiply):"<<num2<<endl;	
}
int main()
{
	int number1=5;
	cout<<"Before Function Call:"<<number1<<endl;
	subtract(number1);
	cout<<"After Function Call:"<<number1<<endl;
	int number2=6;
	cout<<"Before Function Call:"<<number2<<endl;
	multiply(number2);
	cout<<"After Function Call:"<<number2<<endl;
	return 0;
}