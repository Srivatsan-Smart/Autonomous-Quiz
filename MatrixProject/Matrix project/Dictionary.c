#include<stdio.h>
#include<conio.h>
void main(){
	char e,Dict[5][10]={"baa","abcd","abca","bad","bac"},result[5];
	int flag,flag2,length=5,i=0,j,k,s=0,total=0;
	k=0;
	while(k<(5-1)){
		if(total==3){
			flag2=0;
			if(Dict[k][0]==Dict[k+1][0]){
				e=Dict[k][0];
				while(j<s){
					if(result[j]==e){
						flag2=1;
						break;
					}
					j++;
				}
				if(flag2==0){
				
				result[s++]=Dict[k][0];
				break;
			}
		}
				else{
					i=1;
			flag2=0;
			j=0;
			for(i=1;Dict[k][i]!='\0';i++){
				if(Dict[k][i]!=Dict[k+1][i]){
					e=Dict[k][i];
					flag2=0;
					while(j<i){
						if(result[j]==e){
							flag2=1;
						}
						j++;
					}
					if(flag2==0){
					total++;
					result[s++]=Dict[k][i];
				}
					else{
					total++;	
					result[s++]=Dict[k+1][i];
				}
				}
				k++;
			}
		}
	}

		else if(Dict[k][0]!=Dict[k+1][0]){
			//printf("%c",Dict[k][i]);
			result[s++]=Dict[k][0];
			k++;
			total++;
			continue;
		}
		else{
			i=1;
			flag=0;
			j=0;
			for(i=1;Dict[k][i]!='\0';i++){
				if(Dict[k][i]!=Dict[k+1][i]){
					e=Dict[k][i];
					flag2=0;
					while(j<i){
						if(result[j]==e){
							flag2=1;
						}
						j++;
					}
					if(flag2==0){
					total++;
					result[s++]=Dict[k][i];
				}
					else{
					total++;	
					result[s++]=Dict[k+1][i];
				}
					k++;
					flag=1;
					break;
				}
			}
			if(flag!=1)
			k++;
		}
	}
	for(j=0;j<s;j++) printf("%c",result[j]);
}

	
