#include<iostream>
using namespace std;

struct StudentGrading{
	string name;
	string sapID;
	string address;
	string department;
	double subject1Marks;
	double subject2Marks;
	double maxMarks;
	double minMarks;
};

void calculateMaxAndMinMarks(StudentGrading &student){
	
	student.maxMarks=max(student.subject1Marks,student.subject2Marks);
	student.minMarks=min(student.subject1Marks,student.subject2Marks);
	
}

void displayStudentInfo(const StudentGrading &student){
	
	 cout<<"Name:"<<student.name<<endl;
	 cout<<"SapID:"<<student.sapID<<endl;
	 cout<<"Address:"<<student.address<<endl;
	 cout<<"Departmnt"<<student.department<<endl;
	 cout<<"Subject 1 Marks:"<<student.subject1Marks<<endl;
	 cout<<"Subject 2 marks:"<<student.subject2Marks<<endl;
	 cout<<"Max marks:"<<student.maxMarks<<endl;
	 cout<<"Min marks:"<<student.minMarks<<endl;
}

int main() {
  StudentGrading students[5];
  for(int i=0;i<5;++i)
  {
  	cout<<"Enter details for student:"<<i+1<<":"<<endl;
  	cout<<"Name:";
  	cin>>students[i].name;
  	cout<<"SAP ID:";
  	cin>>students[i].sapID;
  	cout<<"Address:";
  	cin>>students[i].address;
  	cout<<"Departmnt:";
  	cin>>students[i].department;
  	cout<<"Subject 1 marks:";
  	cin>>students[i].subject1Marks;
  	cout<<"Subject 2 marks:";
  	cin>>students[i].subject2Marks;
  	
calculateMaxAndMinMarks(students[i]);	
  }
  
  cout<<"\nStudent Information:"<<endl;
  for(int i=0;i<5;++i)
  {
  	displayStudentInfo(students[i]);
  	cout<<endl;
  }
  
  return 0;
}