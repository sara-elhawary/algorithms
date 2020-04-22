#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");

    /* Loop for each row but in reverse order */
    for(i=rows; i>=1; --i)
    {
    	/* loop to display the stars in each row, number of stars in each row is same as number of rows */
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
