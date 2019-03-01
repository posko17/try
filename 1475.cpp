#include <iostream>
using namespace std;
int main()
{
	char c;
	int num[9]={0},max=0;
	while(1)
	{
		c=getchar();
		if(c=='\n')
			break;
		if(c-48==9)
			num[6]++;
		else
			num[c-48]++;
	}
	for(int i=0;i<9;i++)
	{
		if(i==6)
		{
			if(max<num[i]/2+num[i]%2)
				max=num[i]/2+num[i]%2;
		}
		else
		{
			if(max<num[i])
				max=num[i];
		}
	}
	cout<<max;
}