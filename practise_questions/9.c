#include <stdio.h>
int main()
{
    int maths, phy, chem;
    float total = maths + phy + chem;
    printf("Enter marks1:");
    scanf("%d", &maths);
    printf("Enter marks2:");
    scanf("%d", &phy);
    printf("Enter marks3:");
    scanf("%d", &chem);
    if (total >= 40)
    {
        if (maths < 33 || phy < 33 || chem < 33)
        {
            printf("not passed");
        }
        else
        {
            printf("passed!");
        }
    }
    else
    {
        printf("not passed");
    }
    return 0;
}