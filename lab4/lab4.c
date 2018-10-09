#include<stdio.h>
#include<stdlib.h>

int main()
{ 
   int a[100], b[100], c[100];
   int size;
   do
   {
    printf("Put the size of your array: \n");
    scanf("%d", & size); //size printed by the user
   }
   while( size<0 || size>100);
    printf("\n");
   
   int i;
   printf("Elements of the array 1:  ");
   
   for(i=0; i<size; i++) //loop for the first array
   {
    a[i]=rand()%10;
    printf( "%d", a[i]);
    printf("  ");
   }
    printf("\n");
    printf("\n");
    printf("Elements of the array 2:  ");
   for(i=0; i<size-5; i++) //loop for the second array
   {
    b[i]=a[i+5];
    printf("%d",b[i]);
    printf("  ");
   }
    printf("\n");
    printf("\n");
    printf("Elements of a new array 2:  "); 
    
    
   for(i=0; i<size-2; i++) //loop for the third array
   {
    if(i<5)
    {
    c[i]=b[i];
    }
    else
    {
    c[i]=rand() %10;
    }
    printf("%d", c[i]);
    printf(" ");
   }
    
   
   
   return 0;
}
