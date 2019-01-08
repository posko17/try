#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	switch(n%5)
	{
		case 0:
			cout<<n/5;
			break;
		case 1:
			if(n>5)
				cout<<n/5-1+2;
			else
				cout<<-1;
			break;
		case 2:
			if(n>11)
				cout<<n/5-2+4;
			else
				cout<<-1;
			break;
		case 3:
				cout<<n/5+1;
			break;
		case 4:
			if(n>5)
				cout<<n/5-1+3;
			else
				cout<<-1;
			break;
	}
	return 0;
}