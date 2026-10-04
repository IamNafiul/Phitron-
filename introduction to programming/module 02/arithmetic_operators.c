#include<stdio.h>
int main()
{
    int a = 10 ;
    int b = 5;
    int sum = a + b ;
    printf("summation = %d\n",sum);
    int sub = a - b ;
    printf ("subtraction = %d\n",sub);
    int mul = a * b ;
    printf ("multiplication = %d\n" ,mul);
    int div = a / b ;
    printf ("division = %d\n",div);
    int c = 5;
    int d = 2;
    int div2 = c/d;
    printf ("division2 = %d\n",div2);
    float e = 5;
    int f = 2;
    float div3 = e/f;
    printf ("division3 = %.2f",div3);

    return 0;
}