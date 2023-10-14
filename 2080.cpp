#include<stdio.h>
#include<string.h>
int min(int a,int b){
	if(a<=b) return a;
	else return b;
}
int max(int a,int b){
	if(a>=b) return a;
	else return b;
}
int main(){
	int i,j,dp[505][505],lenx,leny;
	char x[505],y[505];
	memset(dp,0,sizeof(dp));
	while(~scanf("%s\n%s",x+1,y+1)){
		lenx=strlen(x+1);
		leny=strlen(y+1);
		for(i=1;i<=lenx;i++){
			for(j=1;j<=leny;j++){
				if(x[i]==y[j]) dp[i][j]=dp[i-1][j-1]+1;
				else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
		printf("%d\n",dp[lenx][leny]);
	}
	return 0;
}
