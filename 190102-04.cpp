#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a<b)
		swap(a,b);
	if(a<c)
		swap(a,c);
	if(b<c)
		swap(b,c);
	cout<<b;
	return 0;
}
void swap(int &a,int &b)
{
	int t;
	a=t;
	a=b;
	b=t;
	return ;
}