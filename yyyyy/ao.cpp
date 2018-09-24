#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200][200];
void init(){
	cin>>n>>m;
	for(int i=0;i<10;i++){
		for(int j=0;j<12;j++){
			cin>>a[i][j];
		}
	}
}
void Loang(int u,int v){
	a[u][v]='.';
	if(u-1>=0&&a[u-1][v]=='W') Loang(u-1,v);
	if(v-1>=0&&a[u][v-1]=='W') Loang(u,v-1);
	if(u+1<n&&a[u+1][v]=='W') Loang(u+1,v);
	if(v+1<m&&a[u][v+1]=='W') Loang(u,v+1);
//	if(u-1>=0&&v-1>=0&&a[u-1][v-1]=='W') Loang(u-1,v-1);
//	if(u+1<n&&v+1<m&&a[u+1][v+1]=='W') Loang(u+1,v+1);
//	if(v-1>=0&&u+1<n&&a[u+1][v-1]=='W') Loang(u+1,v-1);
//	if(u-1>=0&&v+1<m&&a[u-1][v+1]=='W') Loang(u-1,v+1);
}
int main()
{
	init();
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='W'){
				Loang(i,j);
				dem++;
			}
		}
	}
	cout<<dem;
}

