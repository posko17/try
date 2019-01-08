#include <iostream>
#include <string>
using namespace std;
int main()
{
	string c;
	while(1)
	{
		getline(cin,c);
		if(c=="END")
			return 0;
		for(string::reverse_iterator it=c.rbegin();it!=c.rend();++it)
			cout<<*it;
		cout<<endl;
	}
}