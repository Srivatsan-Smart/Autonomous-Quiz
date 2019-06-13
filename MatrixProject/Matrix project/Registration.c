#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Registration(){
	FILE *fp;
	fp=fopen("F:\\MatrixProject\\Matrix project\\Details.txt","a+");
	char c,username[20],password[10];
	int i=0;
	printf("User name should not exceed 20 characters\n");
	printf("Enter username\n");
	scanf("%s",username);
	if(strlen(username)>20){
		printf("username limit exceeded\n");
		Registration();
	}
	while(1){
	printf("Password should not exceed 10 characters and end password with '!'\n");
	printf("Enter password\n");
	i=0;
	
	while(c=getch()){
		if(c=='!') break;
		if(c!=8) {
		printf("*");
		password[i++]=c;
	}
	}
	if(i>10) {
		printf("Password limit exceeded\n");
	}
	if(i<=10){
		break;
	}
}

	password[i]='\0';
	fprintf(fp,strcat(username," "));
	fprintf(fp,strcat(password," "));
}
