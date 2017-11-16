 #include<iostream>
#include<string>
 using namespace std;

 int main()
 {
     int number,x;
     int arr[1000],i;
    cout<<"Enter number of elements:";
    cin>>number;
    cout<<"Enter position of x:";
    cin>>x;
    for(i=0;i<number;i++)
    {
        cout<<"Enter element"<<i+1<<":";
        cin>>arr[i];

    }
    for(i=x;i<number;i++)
    {
        arr[i]=arr[i+1];

    }
    arr[number-1]=-1;
    for(i=0;i<number;i++)
    {
        cout<<arr[i]<<endl;

    }

     return 0;
 }
