#include <iostream>
using namespace std;
int main()
{
	int c,n;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>n;
		double sum=0;
		double s;
		int *list,count=0;
		list=new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>s;
			*(list+j)=s;
			sum+=s;
		}
		double mean;
		mean=sum/static_cast<double>(n);
		for(int j=0;j<n;j++)
		{
			if(*(list+j)>mean)
				count++;
		}
		delete[] list;
		cout<<fixed;
		cout.precision(3);
		cout<<static_cast<double>(count)/static_cast<double>(n)*100.0<<'%'<<endl;
	}
	return 0;
}