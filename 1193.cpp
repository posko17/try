#include <iostream>
using namespace std;
int main()
{
	int n,arr=0;
	cin>>n;
	for(int i=1;;i++)
	{
		if(n<=arr+i&&n>arr)
		{
			if(i%2)//odd from left
			{
				cout<<i-(n-arr-1)<<'/'<<n-arr;
				return 0;
			}
			else//even from top
			{
				cout<<n-arr<<'/'<<i-(n-arr-1);
				return 0;
			}
		}
		arr=arr+i;
	}
}