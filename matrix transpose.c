#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

   
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
         
        
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            printf("%d", transpose[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}