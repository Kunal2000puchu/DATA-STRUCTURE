#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    int a[MAX][MAX],b[MAX][MAX],mul[MAX][MAX],arows,acolumns,brows,bcolumns;
    int i,j,k,sum=0;
    printf("Enter the num of rows for a matrix :");
    scanf("%d",&arows);
    printf("Enter the num of columns for a matrix :");
    scanf("%d",&acolumns);
    printf("Enter the elements in the a array:\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the num of rows for b matrix :");
    scanf("%d",&brows);
    printf("Enter the num of columns for b matrix :");
    scanf("%d",&bcolumns);
    if(brows!=acolumns)
    {
        printf("Error,we can not multiply the matrix");
    }
    else
    {
    printf("Enter the elements in the b array:\n");
    for(i=0;i<brows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    }
    
    printf("\n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            for (k=0;k<brows;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
                       mul[i][j]=sum;
        }
    }
    printf("Resultant Array");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

