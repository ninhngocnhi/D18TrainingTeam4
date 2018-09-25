#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n,a[10],b[10],c[10],t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>m>>n;
		for(int i=0;i<=3;i++)
			cin>>a[i];
		a[1]=a[1]+(n-m);
		b[0]=0;
		for(int i=1;i<=3;i++)
			cin>>b[i];
		int nho=0;
		for(int k=3;k>=0;k--)
		{
			if(n-m>=0)
			{
				c[k]=(a[k]+b[k])%100+nho;
				if((a[k]+b[k])>=100) nho=1;
			}
			if(n-m<0)
			{
				c[k]=(a[k]-b[k])%100+nho;
				if((a[k]+b[k])>=100) nho=1;
				if(c[k]<0)
				{
					c[k]=100+c[k];
					nho=-1;
				}
			}
		}
		for(int j=0;j<=3;j++)
			cout<<c[j]<<" ";
		cout<<endl;
	}
	
}

