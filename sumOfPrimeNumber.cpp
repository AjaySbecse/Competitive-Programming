#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    if (num==0 && num ==1)
    {
        return false;
    }
    else
    {
        for(int i=2;i<num/2;i++)
        {
            if (num%i == 0)
            {
                return false;
            }
            
        }
    }
    return true;
}

int main() {
    int number;
    cin>>number;
    
    for(int i=2;i<number;i++)
    {
        if (checkPrime(i))
        {
            if (checkPrime(number-i))
            {
                cout<<number<<" = "<<i<<" + "<< (number-i)<<endl;
            }
        }
    }
    
}
