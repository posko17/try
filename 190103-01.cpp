#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	switch(x)
	{
		case 12:
		y+=30;
		case 11:
		y+=31;
		case 10:
		y+=30;
		case 9:
		y+=31;
		case 8:
		y+=31;
		case 7:
		y+=30;
		case 6:
		y+=31;
		case 5:
		y+=30;
		case 4:
		y+=31;
		case 3:
		y+=28;
		case 2:
		y+=31;
		case 1:
		break;
	}
	switch(y%7)
			{
				case 1:
					cout<<"MON";
					return 0;
				case 2:
					cout<<"TUE";
					return 0;
				case 3:
					cout<<"WED";
					return 0;
				case 4:
					cout<<"THU";
					return 0;
				case 5:
					cout<<"FRI";
					return 0;
				case 6:
					cout<<"SAT";
					return 0;
				case 0:
					cout<<"SUN";
					return 0;
			}
}