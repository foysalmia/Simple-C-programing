/*Asma wrote the following function to make an integer positive.
void makePositive(int a) {
	if (a < 0) {
		a = -a;
	}
	}

	Will it work? If not, how can she fix it?
*/

#include<stdio.h>


int makePositive(int a)
{
    if (a < 0)
    {
        return a = -a;
    }
    else
    {
        return a;
    }
}



int main()
{
    int x;
    scanf("%d",&x);
    x = makePositive(x);

    printf("%d",x);

}
