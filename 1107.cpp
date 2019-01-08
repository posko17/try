#include <iostream>
using namespace std;
int nearest(int* broken,int n,int m);
int check_possible( int n, int* broken,int m);
int main()
{
	int n,m,digit;
	int *broken,near;
	int click_num=0,click_ud=0;
	cin>>n>>m;
	broken=new int[m];
	for(int i=0;i<m;i++)
	{
		cin>>broken[i];
	}
	near=nearest(broken,n,m);//nearest integer by button
	//starting channel was 100
	if(near<10)
		digit=1;
	else if(near<100)
		digit=2;
	else if(near<1000)
		digit=3;
	else if(near<10000)
		digit=4;
	else if(near<100000)
		digit=5;
	else 
		digit=6;
	if(n-100<0)
		click_ud=100-n;
	else
		click_ud=n-100;
	if(n-near<0)
		click_num=near-n+digit;
	else
		click_num=n-near+digit;
	if(click_num<click_ud)
		cout<<click_num;
	else
		cout<<click_ud;
}
int nearest(int *broken,int n,int m)//to get the nearest integer
{
	int distance=500000;
	for(int i=0;i<n+distance;i++)//to check the nearest integer
	{
		if(check_possible(i,broken,m))
		{
			int displacement;
			if(distance<0)
				displacement=-distance;
			else
				displacement=distance;
			if(i<=n)
			{
				if(n-i<displacement)
					distance=n-i;
			}
			else
			{
				if(i-n<displacement)
					distance=n-i;
			}
		}
		else
			continue;
	}
	return n-distance;
}
int check_possible( int n, int* broken,int m)
{
	int a=-1,b=-1,c=-1,d=-1,e=-1,f=-1;
	if(n<10)//1
	{
		a=n;
	}
	else if(n<100)//2
	{
		a=n/10;
		b=n%10;
	}
	else if(n<1000)//3
	{
		a=n/100;
		b=n%100/10;
		c=n%10;
	}
	else if(n<10000)//4
	{
		a=n/1000;
		b=n%1000/100;
		c=n%100/10;
		d=n%10;
	}
	else if(n<100000)//5
	{
		a=n/10000;
		b=n%10000/1000;
		c=n%1000/100;
		d=n%100/10;
		e=n%10;
	}
	else //6
	{
		a=n/100000;
		b=n%100000/10000;
		c=n%10000/1000;
		d=n%1000/100;
		e=n%100/10;
		f=n%10;
	}
	for(int i=0;i<m;i++)
	{
		if(a==broken[i])
			return 0;
		if(b==broken[i])
			return 0;
		if(c==broken[i])
			return 0;
		if(d==broken[i])
			return 0;
		if(e==broken[i])
			return 0;
		if(f==broken[i])
			return 0;
	}
	return 1;
}