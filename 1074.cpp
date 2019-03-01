#include <iostream>
using namespace std;
int check_quadrant(int r, int c, int size,int x,int y,int count);
int main()
{
	int n,r,c;
	long long int count=0,size=1;
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	cin>>n>>r>>c;
	for(int i=0;i<n;i++)
		size=size*2;
	//check the quadrant
	check_quadrant(r,c,size/2,0,0,0);
}
int check_quadrant(int r, int c,int size,int x, int y,int count)
{
	int quadrant;
	if(size==1)
	{
		if(r==y)
		{
			if(c==x)
				cout<<count;
			else
				cout<<count+1;
		}
		else
		{
			if(c==x)
				cout<<count+2;
			else
				cout<<count+3;
		}
	}
	else
	{
		//check the coordinate 
		//based on the size and the starting coordinate xy
		if(r<y+size)
		{
			if(c<x+size)//2nd quadrant
			{
				//count=count;
				check_quadrant(r,c,size/2,x,y,count);
			}
			else//1st quadrant
			{
				count+=size*size;
				check_quadrant(r,c,size/2,x+size,y,count);
			}
		}
		else
		{
			if(c<x+size)//3rd quadrant
			{
				count+=size*size*2;
				check_quadrant(r,c,size/2,x,y+size,count);
			}
			else//4th quadrant
			{
				count+=size*size*3;
				check_quadrant(r,c,size/2,x+size,y+size,count);
			}
		}
	}
}