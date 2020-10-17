#include<iostream>
using namespace std;
int main()
{
	int m,n;
	
	cin>>m>>n;
	
	int flag=0;
	
	int a[m][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i!=j && a[i][j]!=0)
			{
				cout<<"Not identity matrix";
				flag=1;
				break;
			}
			
			if(i==j && a[i][j]!=1)
			{
				cout<<"Not identity matrix";
				flag=1;
				break;
			}
		}
	}
	
	if(flag==0)
	{
	
	cout<<"YES it is an identity matrix!";
	
   }
	
	return 0;
	
}
