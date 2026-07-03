#include <stdio.h>

int linear(int a[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==key)
            return i;
    return -1;
}

int binary(int a[], int n, int key)
{
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==key)
            return m;
        else if(key<a[m])
            h=m-1;
        else
            l=m+1;
    }
    return -1;
}

int main()
{
    int a[20],n,key,ch,i,pos;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    printf("\n1.Linear Search\n2.Binary Search\nEnter choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            pos=linear(a,n,key);
            break;

        case 2:
            pos=binary(a,n,key);
            break;

        default:
            printf("Invalid Choice");
            return 0;
    }

    if(pos==-1)
        printf("Element Not Found");
    else
        printf("Element Found at Position %d",pos+1);

    return 0;
}
    while(l<=h){
        m=(l+h)/2;

        if(a[m]==key){
            printf("Found at %d",m+1);
            return 0;
        }
        else if(key>a[m])
            l=m+1;
        else
            h=m-1;
    }

    printf("Not Found");
}
