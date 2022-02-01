#include<stdio.h>
main()
{
    clrscr();
    add();
    isEven();
}
add()
{
    int a,b,c;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
    return 0;
}
isEven()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if(a%2==0)
    printf("even");
    else
    printf("odd");
}