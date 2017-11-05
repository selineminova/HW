#include<iostream>
using namespace std;
int main()
{
	int n,number,i,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>number;
		sum=sum+number;
	}
	cout<<"Sum="<<sum<<endl;
}
