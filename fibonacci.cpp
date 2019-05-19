#include <stdio.h>
#include <iostream>

int input,temp,F,temp2;
using namespace std;

int main()
{
	F=F-1;
	cout<<"fibonacci counts (F=f(n-1)+f(n-2))\n";
	cin>>input;
	while  (temp <= input)
	{	
		
		
		temp2=temp2+1;
		temp=temp2+F;
		
		temp2=F;
		F=temp;
		cout<<F+1<<' ';
	}
	return 0;
}