#include <stdio.h>
#include <math.h>
int main()
{    double a,b,g;

     printf("Put a\n");
     scanf("%lf/n",&a);
     printf("Put b\n");
     scanf("%lf/n",&b);
                    
     g=(pow((a-b),4)-pow(a,4)-4*pow(a,3)*b))/6*pow(a,2)*pow(b,2)-4*a*pow(b,3)+pow(b,4);
                         
                         
     printf("result=%lf\n",g);
                              
     return 0;
 }
                                   
