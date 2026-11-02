#include<stdio.h>
#include<math.h>
int main()
{
    int ans = ceil(4.3);
    int ans1 = floor(4.3);
    int ans2 = round(4.4);
    int ans3 = round(4.5);
    int ans4 = sqrt(25);
    double ans5 = sqrt(20);
    int ans6 = pow(10,2);
    int ans7 = abs(-7);

    printf("%d %d %d %d %d %lf %d %d",ans,ans1,ans2,ans3,ans4,ans5,ans6,ans7);
    return 0;
}
