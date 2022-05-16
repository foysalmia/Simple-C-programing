/*Write a function that will take an array and find its maximum.*/

#include<stdio.h>

int findMaximum(int a[],int size)
{
    int max = a[0];

    for(int i=0;i<size;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(arr[0]);

    int maximum = findMaximum(arr,len);

    printf("Maximum value is %d\n",maximum);

    return 0;
}
