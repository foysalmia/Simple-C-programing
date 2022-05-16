/* Write a function which will right rotate an array by k. For example, array a has the values {1, 2, 3, 4, 5}. If we call Rotate(a). Array a will have the values {2, 3, 4, 5, 1}.
*/


#include<stdio.h>

void rotate(int a[],int size)
{
    for(int i=0; i<4; i++)
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
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);

    rotate(arr,len);

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



