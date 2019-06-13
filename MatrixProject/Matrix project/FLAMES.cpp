#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[20],name2[20];
	int i,j,k,one[27],two[27];
	printf("Enter name1:");
	scanf("%s",name1);
	printf("\nEnter name2:");
	scanf("%s",name2);
	for(i=0;i<27;i++)
	{
		one[i]=0;
		two[i]=0;
	}
	strcpy(name1,strupr(name1));
	strcpy(name2,strupr(name2));
	printf("%s %s",name1,name2);
	
	/*for(i=0;s[i]!='\0';i++)
	{
		one[s[i]]
	}*/
}
