#include<iostream>
using namespace std;
int check(int i);
int main()
{
	int c,n,doom_num,count=0,i;
	//digit 9
	cin>>n;
	for( i=666;count!=n;++i)
	{
		if(check(i))
			count++;
	}
	cout<<i-1;
	return 0;
}
int check(int i)
{
	int count=0;
	int digit;
	while(1)
	{
		digit=i%10;
		i/=10;
		if(digit==6)
			count++;
		else
			count=0;
		if(count==3)
			return 1;
		if(i==0)
			return 0;
	}

}