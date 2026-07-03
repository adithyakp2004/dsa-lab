#include <stdio.h>

int p[10];

int find(int x)
{
    while(p[x]) x=p[x];
    return x;
}

int main()
{
    int c[10][10],n,i,j,a,b,min,cost=0,e=1;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    printf("Enter cost matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
                c[i][j]=999;
        }

    printf("\nThe edges of Minimum Cost Spanning Tree are\n");

    while(e<n)
    {
        min=999;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(c[i][j]<min){
                    min=c[i][j];
                    a=i;
                    b=j;
                }

        i=find(a);
        j=find(b);

        if(i!=j){
            p[j]=i;
            printf("%d edge (%d,%d) = %d\n",e++,a,b,min);
            cost+=min;
        }

        c[a][b]=c[b][a]=999;
    }

    printf("\nMinimum cost = %d",cost);

    return 0;
}
