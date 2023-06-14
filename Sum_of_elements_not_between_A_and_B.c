#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int s;
    s=0;
    for(i=0;i<n;i++)
    {
        if(!(arr[i]>=x&&arr[i]<=y))
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}