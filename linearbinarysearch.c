/**write a pro to perform linear and binary search**/
#include<stdio.h>
#define size 50
void binary(void);
void linear(void);

int main()
{
    int num;
    printf("insert 1 for binary search ,// 2 for linear search");
    scanf("%d",&num);
    switch (num)

{
case 1:
    binary();
    break;

case 2:
   linear();
    break;
}
}
void binary()
{
    int i,first,last,middle,n,search,array[50];

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

    printf("Enter value to find\n");//searching
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
      if (array[middle] < search)
        first = middle + 1;
      else if (array[middle] == search)
      {
        printf("%d found at location %d\n", search, middle+1);
        break;
      }
      else
        last = middle - 1;

      middle = (first + last)/2;
    }
    if (first > last)
      printf("Not found!!! %d not present in the list\n", search);

}
void linear()
{
    int array[50],search,j,n;

      printf("Enter number of elements \n");
      scanf("%d", &n);

      printf("Enter %d integer\n", n);

      for (j = 0; j < n; j++)
        scanf("%d", &array[j]);

      printf("Enter a number to search\n");//searching
      scanf("%d", &search);

      for (j = 0; j < n; j++)
      {
        if (array[j] == search)
        {
          printf("%d found at location %d\n", search, j+1);
          break;
        }
      }
      if (j == n)
        printf("%d Not found!!!", search);

      
}

