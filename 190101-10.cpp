#include <iostream>
using namespace std;
int main()
{
	int n,a,sum=0;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++)
	{
		a=getchar();
		sum+=a-48;
	}
	cout<<sum<<endl;
	return 0;
}