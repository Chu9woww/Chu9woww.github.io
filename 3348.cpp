#include<stdio.h>
struct array{
	int x;
	int y;
	int num;
}Array[1000];
int main(){
	
	int i,mu,nu,tu,t,n;
	while(scanf("%d%d%d",&mu,&nu,&tu)!=EOF){
		t=0;
		for(i=0;i<tu;i++){
			scanf("%d%d%d",&Array[i].x,&Array[i].y,&Array[i].num);
 	   }
		scanf("%d",&n);
		for(i=0;i<tu;i++){
			if(n==Array[i].num){
				t=1;
				break;
			}
		}
		if(t) printf("OK\n");
		else printf("ERROR\n");
    }
	return 0;
} 
