#include<iostream>
using  namespace std;
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if (num&1)
    {
        cout<<"\nThe given number is ODD";
    }
    else
    {
        cout<<"\nThe given number is EVEN";
    }
    return 0; 
}
