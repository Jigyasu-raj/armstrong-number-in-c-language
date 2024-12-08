#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arm=0,rem,actual;
    printf("Enter the number ");
    scanf("%d",&n);
    actual=n;
    while(n>0)
    {
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }
    if(actual==arm)
    {
    printf("Armstrong number ");
    }
    else{
        printf("Not armstrong number");
    }
    return 0;

}