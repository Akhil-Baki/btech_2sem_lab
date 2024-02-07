#include <stdio.h>

int main() {
    int n,i;
    

    printf("enter the no.of elements :");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d \n",a[i]);
        sum+=a[i];
    }
    printf("sum is %d",sum);
    

    return 0;
}

