#include <iostream>
using namespace std;
int main()
{
	//97~122
	char c;
	int count=0;
	int alpha[26];
	for(int i=0;i<26;i++)
		alpha[i]=-1;
	while(1)//cin.eof()사용 불가
	{
		c=getchar();
		if(c=='\n')
			break;
		if(alpha[c-97]==-1)
			alpha[c-97]=count;
		count++;
	}
	for(int i=0;i<26;i++)
		cout<<alpha[i]<<" ";
}