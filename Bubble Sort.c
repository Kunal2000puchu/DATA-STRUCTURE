#include<stdio.h>
#include<stdlib.h>

int main()
{
      int a[10], n, i, j, temp;
      printf("Enter No. of Elements:");
      scanf("%d", &n);
      printf("Enter %d Numbers:", n);
      for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
       for(i = 0 ; i < n - 1; i++)
            for(j = 0 ; j < (n-i-1); j++)
                   if(a[j] > a[j+1])
                   {
                       temp=a[j];
                       a[j]=a[j+1];
                       a[j+1]=temp;
                    }
        printf("Bubble Sorted Array:");
        for(i = 0; i < n; i++)
        printf("%d ", a[i]);
        return 0;
}
