#include<stdio.h>
#include"MatrixFunctions.c"
int main(){
	int x,res,flag=0,op;
	printf("0-Exit\n1-Registration\n2-Login\n");
	scanf("%d",&x);
	switch(x){
		case 0:
			exit(0);
		case 1:
			if(Registration()==1){
				main();
			}
			break;
		case 2:
			res=Login();
			if(res==1){
				flag=1;
			}
			else{
				exit(0);
			}
			break;
	}
	if(flag==1){
		while(1){
			printf("0-exit\n1-Matrix Addition\n2-Matrix Subtraction\n3-Matrix Multiplication\n4-Matrix Division\n5-Scalar Matrix Multiplication\n6-Scalar Matrix Division\n7-Transpose\n8-Determinant\n9-Inverse\n");
			scanf("%d",&op);
			switch(op){
				case 0:
					exit(0);
				case 1:
					addition();
					break;
				case 2:
					Matrixsub();
					break;
				case 3:
					matrixmultiplication();
					break;
				case 4:
					division();
					break;
				case 5:
					Scalarmul();
					break;
				case 6:
					Scalardiv();
					break;
				case 7:
					Transpose();
					break;
				case 8:
					Determinant();
					break;
				case 9:
					Matrixinverse();
					break;
				default:
					break;
					
			}
		}
	}
	return 0;
}

