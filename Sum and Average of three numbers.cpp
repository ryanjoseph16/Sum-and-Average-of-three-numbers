#include <iostream>
using namespace std;

int main()
{
	cout<<" C++ Program to Find Sum and Average of three numbers"<<endl;
	float a, b, c,sum;
	float Ave;
	cout <<"Enter 1st number ::";
	cin >> a ;
	cout <<"Enter 2nd number ::";
	cin >> b;
	cout <<"Enter 3rd number ::";
	cin >> c;
	sum=a+b+c;
	Ave=sum/3;
	cout<< "The SUM of 3 Numbers ["<<a<<"+"<<b<<"+"<<c<<"]="<<sum<<endl;
	cout<< "The AVERAGE of 3 Numbers ["<<a<<","<<b<<","<<c<<"]="<<Ave<<endl;
	
	
	return 0;
}

