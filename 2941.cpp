#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string str;
	int count=0,strc=0,r=0;
	char c;
	int count_check;
	/*ifstream fin,check;
	ofstream s;
	s.open("wtf c");
	fin.open("ljesnjak.in.5");
	check.open("ljesnjak.out.5");
	*check>>count_check;
	if(!fin)
	{
		cout<<"no";
		return 0;
	}*/
	while(1)
	{
		c=getchar();
		if(c=='\n')
			break;
		str.push_back(c);
		strc++;
		if(strc==2)
		{
			if(str=="c="||str=="c-"
			||str=="d-"||str=="lj"||str=="nj"
			||str=="s="||str=="z=")
			{
				count++;
				str.clear();
				strc=0;
			}
			else if(str=="dz")
				continue;
			else
			{
				count++;
				str.erase(str.begin());
				strc=1;
			}
		}
		if(strc==3)
		{
			if(str=="dz=")
			{
				count++;
				str.clear();
				strc=0;
			}
			else
			{
				count+=2;
				str.erase(str.begin(),str.begin()+2);
				strc=1;
			}
		}	
	}
	count+=strc;
	cout<<count;
}