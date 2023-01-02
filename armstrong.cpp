#include<iostream>
using namespace std;
int arm(int x)
{
	int r,rem,num;
	x=r;
	while(r!=0)
	{
		rem=r%10;
		num+=rem*rem*rem;
		r=r/10;
		
	}
	if(x==num)
	{
		cout<<"armstrong number \n";
		
	}
	else
	cout<<" not armstrong number \n";
}
int main()
{
 int num;
 cout<<"enter number to check : ";
 cin>>num;
 cout<<arm(num);	
}




