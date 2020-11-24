#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test_case;
	cin>>test_case;
	while(test_case--)
	{
		string binaryString;
		cin>>binaryString;
		stack<char> s;
		stack<char> rev;
		long int length = binaryString.length();
		for (int i=0;i<length;i++)
		{
			if (s.empty() || (s.top() != binaryString[i]))
			{
				s.push(binaryString[i]);
			}
			else if (s.top() == binaryString[i])
			{
				s.pop();
			}
		}
		if (s.empty())
		{
			cout<<"KHALI";
		}
		else
		{
            while(!s.empty())
			{
			    
				rev.push(s.top());
				s.pop();
			}
			while(!rev.empty())
			{
			    
				cout<<rev.top();
				rev.pop();
			}
		}
		cout<<endl;
	}
	return 0;
}
