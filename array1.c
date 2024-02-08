// 1 2 3 4 5
// 2 3 4 5 1
#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i+1]);
    }
}