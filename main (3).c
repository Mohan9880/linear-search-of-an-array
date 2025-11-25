#include<stdio.h>
int main()
{
    int n,a,flag=0;
    printf("ENTER THE SIZE: ");
    scanf("%d",&n);
    printf("KEY: ");
    scanf("%d",&a);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==a)
        {
        flag=1;
        break;
        }
    }
    if(flag==0)
    printf("key is not found");
    else
    printf("key if found\n");
}