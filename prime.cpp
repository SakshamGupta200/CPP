#include<iostream>
using namespace std;
main()
{
	int i,n,flag=0;
	cout<<"enter a number=";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		{
			cout<<"prime";
		}
		else
		{
			cout<<"not prime";
		}
}
