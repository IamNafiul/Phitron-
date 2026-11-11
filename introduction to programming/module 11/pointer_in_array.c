#include<stdio.h>
int main()
{
  int a[5]={10,20,30,40,50};
  printf("%p\n",&a[0]);
  printf("%p\n",&a[1]);
  printf("%p\n",&a[2]);
  printf("%p\n",&a[3]);
  printf("%p\n",&a[4]);


  printf("Array er 0th index er address : %p\n",&a[0]);
  printf("Array er address: %p\n",a);
  printf("Array er address er value: %d\n",*a);



  return 0;
}