#include <bits/stdc++.h>
#define FOR1(i,k,n) for(i = k; i <= n; i++)
#define FOR2(i,k,n) for(i = k; i >= n; i--)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define base 1000000007

using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t){
		cin>>n;
		int x[n+5];
		FOR1(i,1,n) cin>>x[i];
		sort(x+1,x+n+1);
		int temp;
		temp=(x[1]+x[n])/2;
		cout<<(x[n]-temp+temp-x[1])*2<<endl;
		t--;
	}
}


