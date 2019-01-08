#include <iostream>
using namespace std;
int main()
{
	int n,s,max=0;
	double sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		sum+=s;
		if(max<s)
			max=s;
	}
	sum=sum/max*100/n;
	printf("%.2f",sum);
	return 0;
}