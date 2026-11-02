#include<stdio.h>

// return_type function_name(parameter)
// {
//     return
// }

int sum(int num1,int num2)
{
    int ans = num1 + num2;
    return ans;
}
int sub(int num1,int num2)
{
    int ans = num1 - num2;
    return ans;
}


int main ()
{
    int val = sum(5,20);
    int val1 = sub(5,20);

    printf("%d %d",val,val1);


   return 0;
}