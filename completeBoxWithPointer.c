/*In the following code, complete the box such that it prints “20 40”.
const int a = 20;
printf(“%d “, a);
\\\Write code here.

printf(“%d “, a);
*/

#include<stdio.h>

int main()
{
    const int a = 20;
    printf("%d ", a);
    //Write code here.

    int *p = &a;
    *p = 40;


    printf("%d", a);


}
