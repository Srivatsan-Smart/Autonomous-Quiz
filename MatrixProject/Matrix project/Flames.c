#include<stdio.h>
#include<conio.h>
#include<string.h>
char str[6]="FLAMES";

void main()
{
	int flag=0,i,j,count=7,strcount=6;
	int rcount=1;
	for(i=0;strcount>1;i++){
		if(i==strcount){
			i=-1;
			continue;
		}
		if(rcount==count){
			printf("\n%c",str[i]);
			for(j=i;j<strcount-1;j++){
				str[j]=str[j+1];
			}
			str[j]='\0';
			printf("\n%s",str);
			i=i-1;
			strcount--;
			rcount=0;
		}
		rcount++;
	}
    printf("%s",str);
}
