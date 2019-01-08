#include <iostream>
using namespace std;

int main()
{
	int t;//test case
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int r;
		cin>>r;
		char c;
		c=getchar();//for space
		while(1)
		{
			c=getchar();
			if(c=='\n')
				break;
			for(int j=0;j<r;j++)
				cout<<c;
		}
		cout<<endl;
	}
}