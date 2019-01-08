#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int m,n,count,temp_count1=0,temp_count2=0;;
	char **chess_board;
	cin>>m>>n;
	count=m*n;
	chess_board=new char*[m];
	for(int i=0;i<m;i++)
		chess_board[i]=new char[n];
	//getchar();//' '
	//getchar();//'\n'
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>*(*(chess_board+i)+j);
		}
	//	getchar();//'\n'
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<*(*(chess_board+i)+j);
		}
		cout<<endl;
	//	getchar();//'\n'
	}
	for(int i=0;i<=m-8;i++)
	{
		for(int j=0;j<=n-8;j++)
		{
			//first white
			//second black
			for(int a=i;a<i+8;a++)
			{
				for(int b=j;b<j+8;b++)
				{
					if((a+b)%2)//odd 
					{
						if(chess_board[a][b]=='W')
							temp_count2++;//should be black					
						if(chess_board[a][b]=='B')
							temp_count1++;//should be white
					}
					else//even
					{
						if(chess_board[a][b]=='W')
							temp_count1++;//should be black					
						if(chess_board[a][b]=='B')
							temp_count2++;//should be white
					}
				}
			}
			if(count>temp_count1)
				count=temp_count1;
			if(count>temp_count2)
				count=temp_count2;
			temp_count2=0;
			temp_count1=0;
		}
	}	
	cout<<count<<endl;
	return 0;
}