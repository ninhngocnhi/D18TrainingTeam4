#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	int n,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		int dem=0;
		for(int j=0; j<9;j++)
		{
			while((b/a[j])>=1)
			{
				dem+=b/a[j];
				b=b%a[j];
			}
			if(b==0) break;
		}
		cout<<dem<<endl;
	}
}

