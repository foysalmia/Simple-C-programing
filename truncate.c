/*Write a function truncate() that takes a string and an integer k, and keeps only the first k characters. For example - if s is “abcd”, truncate(s, 2) will make s = “ab”
*/

#include<stdio.h>
#include<string.h>

void truncate(char a[],int b)
{

    for (int i=0; i<strlen(a); i++)
    {
        if(i<b)
        {
            a[i] = a[i];
        }
        else
        {
            a[i] = '\0';
        }
    }

}
int main()
{
    char s[101];
    int n;

    scanf("%s\n",s);
    scanf("%d",&n);
    truncate(s,n);

    printf("%s",s);

}
