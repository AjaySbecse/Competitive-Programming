

#include <iostream>

using namespace std;

int main()
{
    int num;
    int count = 0;
    int mod;
    cout<<"Enter a number : ";
    cin>>num;
    int arr[100];
    while(num!=1)
    {
        mod = num % 2;
        arr[count] = mod;
        count++;
        num = num /2;
        
    }
    if (num == 0)
    {
        arr[count] = 0;
    }
    else 
    {
        arr[count] = 1;
    }
    cout<<"\nThe Binary number is :  ";
    for (int i = count;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
