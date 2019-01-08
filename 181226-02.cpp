#include <iostream>
using namespace std;
int main()
{
	char *a,*temp,ch;
	int i=0;
	a=new char;
	temp=new char;
	cin<<ch;
	*a=ch;
	temp=a;
	while(!NULL)
	{
		delete[] a;
		a=new char[++i];
		for(int j=0;j<i-1;j++)
		{
			*(a+j)=*(temp+j);
		}
		cin<<ch;
		*(a+i)=ch;
		delete[] temp;
		temp=new char[i];
		temp=a;
	}
}