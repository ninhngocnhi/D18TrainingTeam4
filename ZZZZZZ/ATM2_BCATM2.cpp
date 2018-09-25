#include<iostream>
using namespace std;
long long n,s,tong=0,m=36,dem=0,a[35];
int  check[35]={0};
void sinh()
{
	for(int j=0;j<n;j++)
	{
		if(check[j]==0)
		{
			check[j]=1;
			tong+=a[j];
			dem++;
			if(tong==s) 
			{
				if(dem<m) m=dem; 
				tong=0;
				dem=0;
			}
			sinh();
			check[j]=0;
		}
	}
}
int main()
{
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sinh();
	cout<<m;
}

