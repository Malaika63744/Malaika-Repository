#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"Enter the no of rows:";
	cin>>rows;
	cout<<"Enter the no of columns:";
	cin>>cols;
	
	int array[rows][cols];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++) {
			cout<<"Elements["<<i<<"]["<<j<<"]:";
			cin>>array[i][j];
		}
	}
	
	cout<<"\nThe 2D array is:\n";
	for(int i=0;i<rows;i++) {
		for(int j=0;j<cols;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
   return 0;	
}