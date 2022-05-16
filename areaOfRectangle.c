/*Write a function to find the area of a rectangle given its length and width.*/
#include<stdio.h>
int area_of_rectangle(int x,int y)
{
    return x*y;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int area = area_of_rectangle(a,b);
    printf("Area is: %d",area);

    return 0;

}
