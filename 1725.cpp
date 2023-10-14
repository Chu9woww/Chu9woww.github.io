#include<stdio.h>
#include<string.h>
int min(int a,int b){
	if(a<=b) return a;
	else return b;
}
struct Node{
	int T;
	int Coins;
}C[15];
int main(){
	int n,m,dp[20005];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&C[i].T,&C[i].Coins);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		dp[i]=20010;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=C[i].Coins;j++){
			for(int k=m;k>=C[i].T;k--){
				dp[k]=min(dp[k],dp[k-C[i].T]+1);
			}
		}
	}
	if(dp[m]!=20010) printf("%d",dp[m]);
	else printf("-1");
	return 0;
} 
