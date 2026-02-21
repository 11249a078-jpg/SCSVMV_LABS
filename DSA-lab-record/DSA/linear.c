#include<stdio.h>
int main()
{
    int n,i,se,found=0;
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
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            printf("Search element found at location %d",i);
            found=1;
            break;


        }
        

    }
    if(found==0)
    {
        printf("Search element not found");
    }
    return 0;
}
