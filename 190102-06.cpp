#include <iostream>
using namespace std;
int main()
{
	int e,s,m;//e<=15,s<=28,m<=19
	cin>>e>>s>>m;
	for(int i=1;i<=7980;i++)
	{
		int a,b,c;
		if(i%15!=0)
			a=i%15;
		else
			a=15;
		if(i%28!=0)
			b=i%28;
		else
			b=28;
		if(i%19)
			c=i%19;
		else 
			c=19;
		if(e==a&&s==b&&m==c)
		{
			cout<<i;
			return 0;
		}
	}
}