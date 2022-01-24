#include<stdio.h>
void main()
{
    int w;
    printf("enter the weight of watermelon in kg:");
    scanf("%d",&w);
    if(w % 2 == 0)
    printf("the watermelon can be divided into two parts of even weight");
    else
    printf("the watermelon can't be divided into two parts of even weight");
}