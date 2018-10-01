#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int fact(int n)
{   
    int fact=1;
    int i=1;
    if(n==0|| n==1)
    {
     return fact=1;  
    }
    else
    { 
    while(i<=n)  
    {
     fact=fact*i;
     i++;  
    }
    } 
    return fact;
}
int main()
{    
    double a,summ=0,n=1;
    fact(n);
    do
    {
     a=fact(n)/pow(n,n);
     n++;
     summ+=a;
    }
    while(a>0.0001);
    printf("result=%lf",summ,a);
    return 0;
}
                       
