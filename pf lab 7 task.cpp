#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	long factorial = 1.0;
      cout<<"Enter a number";
	  cin>>n;
    do{
      
	  factorial*=i;
	  i++;	
    		
	}
	while(i<=n);
	  cout<<"Factorial is"<<factorial<<endl;
	

	return 0;
}