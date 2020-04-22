#include<stdio.h>

int main()
{
    int i,j,rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            if( (j==i) || (j==rows-i-1) )
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

