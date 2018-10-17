 #include<stdio.h>
 #include<stdlib.h>
 void clear_line(int arr[100][100],int num)
 {
 for(int i=0;i<100;i++)
  arr[num][i]=0;
  return;
 }
 
 void swap_line(int arr[100][100],int num1,int num2, int rowsize)
 {
 int temp;
 for(int i=0; i<rowsize; i++)
 {
 temp= arr[num1][i];
 arr[num1][i]=arr[num2][i];
 arr[num2][i]=temp;
 
 }
 return;
 }
 
 
 
 int main()
 {
 int rows,columns;
 int arr[100][100];
 
 printf("Put an an amount of rows\n");
 scanf("%d",&rows);
 printf("Put an amount of columns\n");
 scanf("%d",&columns);
 
 
 for(int i=0;i<rows; i++)
 {
 for(int j=0;j<columns; j++)
 {
 printf("Put an element [%d][%d]\n",i,j);
 scanf("%d",&arr[i][j]);
 }
 }
 
 for(int i=0; i<rows; i++)
 {
 for( int j=0; j<columns; j++)
 if(arr[i][j]<0)
 {
 clear_line(arr,i);
 swap_line(arr,i,rows-1,columns);
  
 }
 }
 
 for(int i=0;i<rows; i++)
 {
 for(int j=0;j<columns; j++)
 {
 
 printf("%d ", arr[i][j]);
 printf("|");
 
 } printf("\n");

 }
 return 0;
 }
