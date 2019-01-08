#include <iostream>
using namespace std;
void hanoi(int n,int depart, int dest, int rest);
int main()
{
	int n,count=0;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		count=1+count*2;
	}
	cout<<count<<'\n';
	hanoi(n,1,3,2);
}
void hanoi(int n,int depart,int dest, int rest)
{
	if(n==1)
		{
			cout<<depart<<' '<<dest<<'\n';
			return;
		}
	else
	{
		hanoi(n-1,depart,rest,dest);
		cout<<depart<<' '<<dest<<'\n';
		hanoi(n-1,rest,dest,depart);
	}
}