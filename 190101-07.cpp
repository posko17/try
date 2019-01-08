#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int a,b;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>a>>b;
		cout<<a+b<<'\n';
	}
	
	return 0;
}