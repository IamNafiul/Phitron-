#include<stdio.h>
int main()
{
    int x = 20;
    printf("%d\n",x);
    printf("%p\n",&x);

    int* ptr;
    ptr = &x;
    printf("%p\n",ptr);
    printf("%p\n ",&ptr);
    printf("%d\n",*ptr);
    *ptr = 200;
    printf("%d",*ptr);
    return 0;
    
}