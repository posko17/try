#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<100)
		cout<<n;
	else
	{
		int a,b,c,count=0;;
		for(int i=100;i<=n;i++)
		{
			a=i/100;//100's digit
			b=(i%100)/10;//10's digit
			c=i%10;//1's digit
			if(a-b==b-c)
				count++;
		}
		cout<<count+99;
	}
	return 0;
}