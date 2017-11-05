#include<iostream>
using namespace std;
int main()
{
	int number,i,j,sum=0,rem;
	cin>>number;
	for(i=10;i<=number;i++)
	{
		j=i;
		while(j!=0)
		{
			rem=j%10;
			j=j/10;
			sum=sum+rem;
		}
	}
	cout<<sum<<endl;

	

	
	
	
}
