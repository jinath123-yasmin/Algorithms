#include<bits/stdc++.h>
using namespace std;

bool palindrome(char a[1000])
{
	int l=strlen(a);
	
	int front=0;
	
	int rear=l-1;
	
	while(front>rear)
	{
		if(a[front]==a[rear])
		{
			front++;
			rear--;
		}
		
		else
		{
			return false;
		}	
	}
	return true;
	
}
int main()
{
	char a[100];
	
	cin.getline(a,1000);

	
	if(palindrome(a))
	{
		cout<<"Bitches it is a palindrome"<<endl;
		
	}
	
	else
	{
		cout<<"No bitch not a palindrome"<<endl;
	}
	

	
	return 0;
	
}
