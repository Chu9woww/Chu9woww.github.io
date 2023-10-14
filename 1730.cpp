#include<stdio.h>
int max(int a,int b){
	if(a>=b) return a;
	else return b;
}
int main(){
	int i,j,n,dp[101][101];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			scanf("%d",&dp[i][j]);
		}
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			dp[i][j]=max(dp[i][j]+dp[i+1][j],dp[i][j]+dp[i+1][j+1]);
		}
	}
	printf("%d",dp[1][1]);
	
}
