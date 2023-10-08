#include<stdio.h>
#include<string.h>
#include<iostream>
int main(){
	char str1[111],str2[111];
	while(std::cin>>str1>>str2){
		strcat(str1,str2);
		std::cout<<str1<<std::endl;
	}
	return 0;
}
