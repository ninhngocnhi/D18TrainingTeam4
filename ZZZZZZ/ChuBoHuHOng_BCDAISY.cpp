#include<bits/stdc++.h>
#include<vector> 
#include<queue>
using namespace std;
//vector luu cac dinh ke
vector <int> dke[1000];
//mang danh dau cac dinh dax xet
int dd[1000]={0};
int m,n,x,y;
void init(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		dke[x].push_back(y);
		dke[y].push_back(x);
	}
	dd[1]=1;
}
void DFS(int u){
	for(int i=0;i<dke[u].size();i++){
		int v=dke[u][i];
		if(dd[v]==0){
			dd[v]=1;
			DFS(v);
		}
	}
}
void BFS(int s){
	queue <int> qu;
	qu.push(s);
	while(!qu.empty()){
		int u=qu.front();
		qu.pop();
		for(int i=0;i<dke[u].size();i++){
			int v=dke[u][i];
			if(dd[v]==0){
				dd[v]=1;
				qu.push(v);
			}
		}
	}
}
int main()
{
	init();
	BFS(1);
	int ok=0;
	for(int i=1;i<=n;i++){
		if(dd[i]==0){
			ok=1;
			cout<<i<<endl;
		}
	}
	if(ok==0) cout<<0<<endl;
}

