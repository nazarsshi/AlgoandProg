#include<stdio.h>
#include<math.h>
int kvadr(int n,...)
{
    int *m=&n;
    int kvadr=0;
    while(n--)
    {
        if(((int)sqrt(*(++m))==sqrt(*m)) || (n==1))
        {
            kvadr++;
        }
    }
    return kvadr;
}
int main(void)
{
    printf("First call of function\n");
    kvadr(3,1,2,3);
    printf("%d\n",kvadr(3,1,2,3));
    printf("Second call of function\n");
    kvadr(10,1,2,3,4,5,6,7,8,9,10);
    printf("%d\n",kvadr(10,1,2,3,4,5,6,7,8,9,10));
    printf("Third call of function\n");
    kvadr(20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    printf("%d\n",kvadr(20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20));
    }
