#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char userid[20],password[10],fuserid[20],fpass[20];
	int count=3;
	FILE *fp;
	fp=fopen("F:\\MatrixProject\\Matrix project\\Details.txt","r");//File Path
	while(count>0){
	printf("\nEnter userid:");
	scanf("%s",userid);
	printf("\nEnter password");
	scanf("%s",password);
	
		rewind(fp);
	while(fscanf(fp,"%s",fuserid)!=EOF){
		printf("%s",fuserid);
		if(strcmp(fuserid,userid)==0){
			printf("%s",fuserid);
			fscanf(fp,"%s",fpass);
			if(strcmp(fpass,password)==0){
				printf("\nLogged in successfully");
				return 0;
			}
		}
	}
	--count;
	if(count==0){
		printf("sorry chance finished");
	}
	else{
	printf("%d times left",count);
}
}
return 0;
}
