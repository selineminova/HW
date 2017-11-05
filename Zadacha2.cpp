#include<iostream>
using namespace std;
int main()
{
	int n,number,i,sum=0,counter=0;
	double average;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>number;
		if(number>1)
		{
			sum=sum+number;
			counter++;
		}
		else
		{
			break;
		}
		
	}
	average=(double)sum/counter;
	cout<<sum<<endl;
	cout<<counter<<endl;
	cout<<average<<endl;
}
