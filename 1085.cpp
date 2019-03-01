#include <iostream>
using namespace std;
int min(int a,int b,int c,int d);
int main()
{
	int x,y,w,h;
	int b,t,l,r;
	int mini;
	cin>>x>>y>>w>>h;
	b=y;
	t=h-y;
	r=w-x;
	l=x;
	mini=min(b,t,r,l);
	cout<<mini;
}
int min(int a,int b,int c,int d)
{
	int m;
	m=a;
	if(m>b)
		m=b;
	if(m>c)
		m=c;
	if(m>d)
		m=d;
	return m;
}