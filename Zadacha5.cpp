#include<iostream>
using namespace std;
int main()
{
	int i,j,rem,rem1,rem2;
	for(i=100;i<=999;i++)
	{
		j=i;
		while(j!=0)
		{
			rem=j%10;
			j=j/10;
			rem1=j%10;
			j=j/10;
			rem2=j;
			if(rem!=rem1 && rem1!=rem2 && rem!=rem2)
			{
				cout<<i<<endl;
			}
		}
	}

	
	
	
}
