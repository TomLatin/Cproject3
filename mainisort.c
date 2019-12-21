#include <stdio.h>
#include "isort.h"

int main()
{
  int i=0;
  int arr[SIZE]={0};
  int num=0;
  for ( i = 0; i < SIZE; i++)
  {
     printf("please enter a number, this number is %d/50 \n",i+1);
      scanf("%d",&num);
      *(arr+i)=num;
  }

  insertion_sort(arr,SIZE);

  for ( i = 0; i < SIZE; i++)
  {
   printf("%d,",*(arr+i));
  }
}