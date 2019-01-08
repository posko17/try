#include <iostream>
using namespace std;
int main()
{
	int count=0;
	char c;
	string str;
	while(1)
	{
		c=getchar();
		if(c=='\n')
			break;
		if(count==0)
		{
			count=1;
			str.push_back(c);
		}
		if(c=='-')
			count=0;
	}
	cout<<str;
}