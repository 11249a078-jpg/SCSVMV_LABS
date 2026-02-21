#include<stdio.h>
int main()
{
    int n,i,se,
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements into array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:");
    scanf("%d",&se);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==se)
        {
            printf("Search element found at location %d",mid);
            found=1;
            break;

        }
        else if(se<a[mid])
        {
            high=mid-1;

        }
        else
        {
            low=mid+1;
        }
        if(found=0)
        {
            printf("Search element not found:");
        }
        return 0;
    }