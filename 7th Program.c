#include <stdio.h>

int main() {
    int a[20], n, i, j, t, max, ch;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n1. Bubble Sort (Ascending)\n2. Selection Sort (Descending)\n");
    printf("Enter choice: ");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            for(i=0;i<n-1;i++)
                for(j=0;j<n-i-1;j++)
                    if(a[j]>a[j+1]) {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }
            break;

        case 2:
            for(i=0;i<n-1;i++) {
                max=i;
                for(j=i+1;j<n;j++)
                    if(a[j]>a[max]) max=j;
                t=a[i];
                a[i]=a[max];
                a[max]=t;
            }
            break;

        default:
            printf("Invalid Choice");
            return 0;
    }

    printf("Sorted Array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
