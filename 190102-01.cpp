#include <iostream>
using namespace std;
int main()
{
	int i=10;
	char a;
	while(1)
	{
		a=getchar();
		cout<<a;
		i--;
		if(a=='\n')
			return 0;
		if(i==0)
		{
			cout<<endl;
			i=10;
		}
	}
	return 0;
}