#include<iostream>
using namespace std;
int main()
{
	int number,rem,counter=0;
	cin>>number;
	while(number!=0)
	{
		rem=number%10;
		number=number/10;
		counter++;
	}
	cout<<counter<<endl;
}
