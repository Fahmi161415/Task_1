
#include <iostream>

using namespace std;
int main()
{
    // Program to get the size of data type
	cout<<"Size of intis : "<<sizeof(int)<<"bytes"<<endl;
	cout<<"Size of double is : "<<sizeof(double)<<"bytes"<<endl;
	cout<<"Size of float is : "<<sizeof(float)<<"bytes"<<endl;
	cout<<"Size of char is : "<<sizeof(char)<<"byte"<<endl;
	
	// Program to find the product of two entered number
	int num1;
	int num2;
	cout<<"Enter first number :";
	cin>>num1;
	cout<<"Enter second number :";
	cin>>num2;
	cout<<"Product of given two number is :"<<num1*num2;
	
	
	return 0;
}


