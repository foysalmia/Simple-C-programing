/*Suppose, you call Rotate ByK(a, 1000000000). You will find that your program takes a lot of time. How can you optimize your program?
Hint: What happens when you rotate by the array length?*/

#include<stdio.h>

void rotate(int a[],int size,long long int n)
{
   if(n>10001){
        n = n%10001;
    }
    for(int i=0; i<n-1; i++)
    {
        int last = a[size-1];
        for(int j=size-1; j>0; j--)
        {
            a[j] = a[j-1];
        }
        a[0] = last;
    }
}

int main()
{
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);
    long long int a;
    printf("\nHow many times :");
    scanf("%lld",&a);

    rotate(arr,len,a);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return main();
}
