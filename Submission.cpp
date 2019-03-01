#include <iostream>
#include <stdlib.h>
/* BEGIN_YOUR_CODE 
#include <WHATEVERYOUWANT>
 END_YOUR_CODE */
int TAFunction(int argc);

using namespace std;

/* BEGIN_YOUR_CODE */
class list_node
{
private:
	int id;
	list_node *next;
public:
	list_node(int cid,list_node* chead):id(cid),next(head)
	{}
	int get_id()
	{
		return id;
	}
	list_node* get_next()
	{
		return next;
	}
	void set_next(list_node* cnext)
	{
		next=cnext;
	}
};

class list_h {
private:
	int count;
	int num;
	list_node *head;
public:
	list_h(int c):count(c),num(0),head(NULL)
	{}
	int get_count()
	{
		return count;
	}
	void set_count(int c)
	{
		count=c;
	}
	list_node* get_head()
	{
		return head;
	}
	void set_head(list_node* chead)
	{
		head=chead;
	}
	void add(int id)
	{
		if(id==1)
		{
			head=new list_node(id,NULL);
		}
		else
		{
			list_node* temp=head;
			for(int i=1;i<id;i++)
			{
				temp=temp->next;
			}
			temp->next=new list_node(id,head);
		}
		num++;
	}
	int remove(int a)
	{
		list_node* temp=head;
		while(1)
		{
			if(num==1)
			{
				return temp->get_id();
			}
			if(count==1)
			{
				count=a;
				temp->next=temp->next->next;
				delete temp->next;
				num--;
			}
		}
	}
};
/* END_YOUR_CODE */

int Solve(int N, int K,list_h handler)
{
	int result = 0;
	
	/* BEGIN_YOUR_CODE */
	result=handler.remove(K);
	/* END_YOUR_CODE */

	return result;   // safe position
}

int main(int argc, char** argv)
{
	int N = 0, K = 0;
	int result = 0;

	if (TAFunction(argc)) {
		N = atoi(argv[1]);
		K = atoi(argv[2]);
		cout << Solve(N, K);
		return 0;
	}

	/* BEGIN_YOUR_CODE */
	int a = 0, b = 0;
	cout << "N:";
	cin >> N;
	cout << "K:";
	cin >> K;
	list_h handler(K);
	for(int i=0;i<N;)
	{
		handler.add(++i);
	}
	result = Solve(N, K,handler);
	cout << "result:" << result << endl;
	/* END_YOUR_CODE */
	
	return 0;
}

int TAFunction(int argc)
{
	if (argc > 2)
		return true;
	else
		return false;
}