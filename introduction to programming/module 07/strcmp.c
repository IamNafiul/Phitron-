#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a , &b);
    
    int val = strcmp(a,b);

    if(val < 0)
    {
        printf("A is smaller");
    }
    else if(val == 0)
    {
        printf("Equel");
    }
    else if(val > 0)
    {
        printf("B is smaller");
    }


    printf("%s %s", a , b);
    return 0 ;


}