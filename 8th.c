#include <stdio.h>
#define INF 999

int main()
{
    int a[10][10],d[10],v[10]={0},n,i,j,c=0,min,u,s=0;

    printf("Enter the no of vertices: ");
    scanf("%d",&n);

    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    {
        d[i]=a[s][i];
        if(d[i]==0) d[i]=INF;
    }

    d[s]=0;
    v[s]=1;

    while(c<n-1)
    {
        min=INF;
        for(i=0;i<n;i++)
            if(!v[i] && d[i]<min)
                min=d[i],u=i;

        v[u]=1;

        for(i=0;i<n;i++)
            if(!v[i] && d[i]>d[u]+a[u][i] && a[u][i]!=0)
                d[i]=d[u]+a[u][i];

        c++;
    }

    printf("\nVertex\tDistance from Source\n");
    for(i=0;i<n;i++)
        printf("%d\t%d\n",i,d[i]);

    return 0;
}
