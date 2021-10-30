#include<stdio.h>
#include<conio.h>
int main()
{
    int a, i, j, k=1;
     printf("Enter your number");
 scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        for(j=0; j<k; j++)
            printf("0 1 ");
        k=k+1;
        printf("\n");
    }
    getch();
    return 0;
}
