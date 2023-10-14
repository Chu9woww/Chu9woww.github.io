#include<stdio.h>
#include<string.h>
int max(int a,int b){
	if(a>=b) return a;
	else return b;
}
int m[105],price[105],dp[105][1005];
int main(){
	int N,X;
	while(~scanf("%d %d",&N,&X)){
		int i,j;
		for(i=1;i<=N;i++){
		    scanf("%d %d",&price[i],&m[i]);
    	}
    	memset(dp, 0, sizeof(dp));
		for(i=1;i<=N;i++){
			for(j=1;j<=X;j++){
				if(price[i]>j) dp[i][j]=dp[i-1][j];
				else dp[i][j]=max(dp[i-1][j],dp[i-1][j-price[i]]+m[i]);
			}
		}
		printf("%d\n",dp[N][X]);
	}
	return 0;
} 
