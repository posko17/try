#include <iostream>
using namespace std;
int main()
{
	int sixth=1,n;
	cin>>n;
	for(int i=0;;i++)
	{
		sixth+=i*6;
		if(n<=sixth&&n>sixth/6)
		{
			cout<<i+1;
			return 0;
		}
	}
}