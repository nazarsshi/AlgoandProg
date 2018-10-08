#include<stdio.h>
#include<stdlib.h>
int main()
{ 
   int a[100], b[100], c[100] ;
   int size;
   do
   {
    printf("Put the size of your array: \n");
    scanf("%d", & size); //size printed by the user
   }
   while( size<0);
    printf("\n");
   
   int i;
   printf("Elements of the array 1: ");
   
   for(i=0; i<size; i++) //loop for the first array
   {
    printf( "%d", a[i]);
    printf("  ");
   }
    printf("\n");
    printf("\n");
    printf("Elements of the array 2: ");
   for(i=5; i<size; i++) //loop for the second array
   {
    b[i]=a[i];
    printf("%d",b[i]);
    printf("  ");
   }
    printf("\n");
    printf("\n");
    printf("Elements of the array 3: ");
   for(i=5; i<size+3; i++) //loop for the third array
   {
   
    c[i]=b[i];
    printf("%d", c[i]);
    printf("  ");
   
   }
   
   
   return 0;
}
