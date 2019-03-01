#include <iostream>
using namespace std;
int check(int distance, int count,int current_sequence)
int main()
{
	/*
	is the remain distance 
	longer than the possible sequence?
	*/
	int t,x,y,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		count=check(y-x,count,1);
		cout<<count<<endl;
	}
}
int check(int distance,int count,int current_sequence)
{
	if(distance==1)
		return count+1;
	else
	{
		distance-=current_sequence;
		count++;
		if(distance>sequence_sum(current_sequence+1))
		//check if it's possible to increase the sequence
			check(distance,count,current_sequence+1);
	}
}
int sequence_sum(int current_sequence)
{
	int sum=0;
	while(current_sequence>0)
	{
		sum+=current_sequence;
		current_sequence--;
	}
	return sum;
}