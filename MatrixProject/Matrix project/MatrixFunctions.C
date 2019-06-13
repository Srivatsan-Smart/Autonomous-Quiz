#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//#include"MatrixVariables.c"
#include <math.h>
#define SIZE 3 // Maximum size of the array

int addition()
{
   int m, n, c, d, first[10][10], second[10][10], msum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         msum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", msum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}

int Matrixsub()
{
 	int i, j, rows, columns, a[10][10], b[10][10];
 	int Subtraction[10][10];
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   
 	printf("\n Please Enter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
  	}
  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];    
   	 	}
  	}
 
 	printf("\n After Subtracting Matrix a from Matrix b = a - b \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", Subtraction[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}


int matrixmultiplication()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}



int Scalarmul()
{
    int A[SIZE][SIZE]; 
   int num, row, col;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d", &num);

    /* Perform scalar multiplication of matrix */
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            A[row][col] = num * A[row][col];
        }
    }

    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}


int Scalardiv()
{
    float divA[SIZE][SIZE],divnum; 
    int row, col;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%f", &divA[row][col]);
        }
    }

    /* Input multiplier from user */
    printf("Enter any number to divide with matrix A: ");
    scanf("%f", &divnum);
	if(divnum==0){
		printf("\ndivision impossoble");
		return 0;
	}
    /* Perform scalar multiplication of matrix */
    if(divnum>1){
	
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            /* (cAij) = c . Aij */
            divA[row][col] = divA[row][col]/divnum;
        }
    }
}
    /* Print result of scalar multiplication of matrix */
    printf("\nResultant matrix c.A = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%f ", divA[row][col]);
        }
        printf("\n");
    }

    return 0;
}


int Transpose()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter elements of the matrix\n");
 
   for (c = 0; c < m; c++)
      for(d = 0; d < n; d++)
         scanf("%d", &matrix[c][d]);
 
   for (c = 0; c < m; c++)
      for( d = 0 ; d < n ; d++ )
         transpose[d][c] = matrix[c][d];
 
   printf("Transpose of the matrix:\n");
 
   for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++)
         printf("%d\t", transpose[c][d]);
      printf("\n");
   }
 
   return 0;
}


int Determinant(){
 
  int a[3][3], i, j;
 
  long determinant;
  printf("Enter the 9 elements of matrix: ");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &a[i][j]);
 
  printf("\nThe matrix is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }
 
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
  printf("\nDeterminant of 3X3 matrix: %ld", determinant);
 
   return 0;
}


float determinant(float [][25], float);
void cofactor(float [][25], float);
void transpose(float [][25], float [][25], float);
int Matrixinverse()
{
 float a[25][25], k, divd;
 int i, j;
  printf("Enter the order of the Matrix : ");
  scanf("%f", &k);
  printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
  for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
       {
        scanf("%f", &a[i][j]);
        }
    }
  divd = determinant(a, k);
  if (divd == 0)
   printf("\nInverse of Entered Matrix is not possible\n");
  else
   cofactor(a, k);
}
 
/*For calculating Determinant of the Matrix */
float determinant(float a[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = a[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }
 
    return (det);
}
 
void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
  }
  transpose(num, fac, f);
}
/*Finding transpose of matrix*/ 
void transpose(float num[25][25], float fac[25][25], float r)
{
  int i, j;
  float b[25][25],inverse[25][25],divd;
 
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
        }
    }
  divd = determinant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / divd;
        }
    }
   printf("\n\n\nThe inverse of matrix is : \n");
 
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%f", inverse[i][j]);
        }
    printf("\n");
     }
}
float divdeterminant(float a[25][25], float k);
void divcofactor(float first[25][25],float num[25][25], float f);
void divtranspose(float first[25][25],float num[25][25], float fac[25][25], float r);
void divmultiply(float first[25][25],float second[25][25],float r);
int division()
{
  float first[25][25],diva[25][25], divk, divd;
  int i, j;
  printf("Enter the order of the Matrices : ");
  scanf("%f", &divk);
  printf("Enter the elements of first %.0fX%.0f Matrix : \n", divk, divk);
  for (i = 0;i < divk; i++)
    {
     for (j = 0;j < divk; j++)
       {
        scanf("%f", &first[i][j]);
        }
    }  
  printf("Enter the elements of second %.0fX%.0f Matrix : \n", divk, divk);
  for (i = 0;i < divk; i++)
    {
     for (j = 0;j < divk; j++)
       {
        scanf("%f", &diva[i][j]);
        }
    }
  divd = divdeterminant(diva, divk);
  if (divd == 0)
   printf("\nInverse of Entered Matrix is not possible\n");
  else
   divcofactor(first,diva, divk);
}
float divdeterminant(float a[25][25], float k)
{
  float s = 1, det = 0, divb[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                divb[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   divb[m][n] = a[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[0][c] * divdeterminant(divb, k - 1));
          s = -1 * s;
          }
    }
 
    return (det);
}
void divcofactor(float first[25][25],float num[25][25], float f)
{
 float divb[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            divb[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * divdeterminant(divb, f - 1);
    }
  }
  divtranspose(first,num, fac, f);
}

/*Finding transpose of matrix*/ 
void divtranspose(float first[25][25],float num[25][25], float fac[25][25], float r)
{
  int i, j;
 float divb[25][25], inverse[25][25], divd,divsum;
 
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         divb[i][j] = fac[j][i];
        }
    }
  divd = divdeterminant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = divb[i][j] / divd;
        }
    }
    
     divmultiply(first,inverse,r);
    
}
void divmultiply(float first[25][25],float second[25][25],float r){
	int i,j,k;
	float c[25][25],divsum;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			divsum=0;
			for(k=0;k<r;k++)
			{
				divsum=divsum+first[i][k]*second[k][j];
			}
			c[i][j]=divsum;
		}
	}
	   printf("\n\n\nThe Divided matrix is : \n");
 
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%f", c[i][j]);
        }
    printf("\n");
     }
}
int Registration(){
	FILE *fp;
	fp=fopen("F:\\MatrixProject\\Matrix project\\Details.txt","a+");
	char ch,username[20],password[10];
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
	
	while(ch=getch()){
		if(ch=='!') break;
		if(ch!=8) {
		printf("*");
		password[i++]=ch;
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
	fclose(fp);
	printf("\nRegistered Successfully");
	return 1;
}
int Login(){
	char ch,userid[20],password[10],fuserid[20],fpass[20];
	int i=0,count=3;
	FILE *fp;
	fp=fopen("F:\\MatrixProject\\Matrix project\\Details.txt","r");
	while(count>0){
		strcpy(password," ");
	printf("\nEnter userid:");
	scanf("%s",userid);
	printf("\nEnter password(! to end password)");
	while(ch=getch()){
		if(ch=='!') break;
		if(ch!=8) {
			printf("*");
			password[i++]=ch;
		}
	}
	password[i]='\0';
	//printf("%s",password);
		rewind(fp);
	while(fscanf(fp,"%s",fuserid)!=EOF){
		//printf("%s",fuserid);
		if(strcmp(fuserid,userid)==0){
			//printf("%s",fuserid);
			fscanf(fp,"%s",fpass);
			if(strcmp(fpass,password)==0){
				printf("\nLogged in successfully");
				return 1;
			}
		}
	}
	--count;
	if(count==0){
		printf("sorry chance finished");
	}
	else{
	printf("\n%d times left",count);
}
}
fclose(fp);
return 0;
}
