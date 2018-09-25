#include<bits/stdc++.h>
using namespace std;
int R,C;
char a[200][200];
void init(){
	cin>>R>>C;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=R;i++){
		a[i][0]='.';
		a[i][C+1]='.';
	}
	for(int i=0;i<=C;i++){
		a[0][i]='.';
		a[R+1][i]='.';
	}	
}
void Loang(int u, int v){
	a[u][v]='.';
	if(a[u-1][v]=='#') Loang(u-1,v);
	if(a[u+1][v]=='#') Loang(u+1,v);
	if(a[u][v-1]=='#') Loang(u,v-1);
	if(a[u][v+1]=='#') Loang(u,v+1);
}
int main()
{
	init();
	int dem=0;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			if(a[i][j]=='#'){
				Loang(i,j);
				dem++;
			}
		}
	}
	cout<<dem;
	
}

