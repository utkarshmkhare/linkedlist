#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>
#include<string>
#define FOR(i, u, v) for (int i = u; i < v; i++)
#define FORD(i, v, u) for (int i = v; i > u; i--)
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 100005
#define maxc 1000000007
#define ll unsigned long long

using namespace std;

struct node{
	int data;
	node* next;
};

class llist{
	private://///////////////////////////////////////////////////////////////////////////////////////////
	node* head;
	
	
	public://////////////////////////////////////////////////////////////////////////////////////////////
    
	int a=10;
			
    llist(int d)
	{
	 head = new node;	
     head->data=d;	
	 head->next=NULL;	
     
	}		
	
    void addatfront(int data)
{
	node *front = new node;
	front->next=head->next;
	front->data=head->data;
	head->next=front;
	head->data=data;
}

   void addatback(int data)
{
	node* n = head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	n->next = new node;
	n->next->data=data;
	n->next->next=NULL;
}

void display()
{
	node* n=head;
	while(n!=NULL)
	{
		cout<<n->data<<"  ";
		n=n->next;
	}	
}



bool search(int data)
{
	node* n=head;
	while(n!=NULL)
	{
		if(n->data==data)
		{
			return (1);
		}
		else {
			n=n->next;
		}
	}
	return (0);
}

int searchfreq(int data)
{
	node* n=head;
	int ans=0;
	while(n!=NULL)
	{
		if(n->data==data)
		{
		   ans++;
		   n=n->next;
		}
		else {
			n=n->next;
		}
		
	}
	return (ans);
}

	
};

int main() 
{
	
   llist a(3);
   
   a.addatback(5);
   a.addatback(7);
   a.addatfront(1);
   a.display();   	
   cout<<endl;
   cout<<a.search(7)<<endl;
   a.addatback(7);
   cout<<"Freq is :";
   cout<<a.searchfreq(7)<<endl;
   
   //cout<<a.a;
   
 
	return 0;
}
