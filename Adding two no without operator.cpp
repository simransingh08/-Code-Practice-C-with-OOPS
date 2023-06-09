// calculating sum of two number without using + operator
#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	cout<<"Enter two number";
	cin>>a>>b;
	sum = a - (-b);
	cout<<"Sum of two numbers ="<<sum;
	return 0;
}

