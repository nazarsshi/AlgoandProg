#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_file(FILE *F)
{
    char temp[257];
    int count=1;
     while(1)
     {
            fgets(temp,255,F);
            if(feof(F)) break;
            printf("(%d) %s\n",count++,temp);  
     }       
    rewind(F);
}
void copy_file(FILE *F1, FILE *F2)
{
    char temp[257];
    fgets(temp, 255, F1);
    do{
            if (temp[0] == temp[strlen(temp)-2])
            {
                fputs(temp, F2);
            }
            fgets(temp,255,F1);
      }while(!feof(F1));
    rewind(F1);
    rewind(F2);
}
int count_el(FILE *F)
{
    char temp[257];
    int count=0;
    fgets(temp,255,F);
    do{
        count+=strlen(temp);
        fgets(temp,255,F);
      }while(!feof(F));
    
    rewind(F);
    return count;
}
int main()
{
    FILE *f1;
    FILE *f2;
    if((f1=fopen("f1.txt","w+"))==NULL || (f2=fopen("f2.txt","w+"))==NULL)
    {
        printf("Error reading file!\n");
    }
    char a[257];
    int n;
    printf("Put the amount of strings:\n");
    scanf("%d", &n);
    printf("Filling our file:\n");
    getchar();
    for(int i=0; i<n;i++)
    {
        fgets(a,255,stdin);
        fputs(a,f1);
    }
    rewind(f1);
    printf("Printing file 1:\n");
    print_file(f1);
    copy_file(f1,f2);
    printf("Printing file 2:\n");
    print_file(f2);
    printf("The amount of elements in F2.txt:\n");
    printf("%d\n",count_el(f2));
    fclose(f1);
    fclose(f2);
    
    return 0;
}
