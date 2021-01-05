//WAP for Quick Sort
#include<stdio.h>
 
void quick_sort(int elements[], int min, int max);
int sublist_builder(int elements[], int min, int max);
 
int main()
{
      int elements[30], limit, count;
      printf("Enter Limit for Array:\t");
      scanf("%d", &limit);
      printf("\nEnter %d Elements in the Array\n", limit);
      for(count = 0; count < limit; count++)
      {
            scanf("%d", &elements[count]);   
      }
      quick_sort(elements, 0, limit - 1);
      printf("\nSorted List:\n");
      for(count = 0; count < limit; count++)
      {
            printf("%d\t", elements[count]);
      }
      printf("\n");
      return 0;
}
 
void quick_sort(int elements[], int min, int max)
{
      int pivot_index;
      if(min >= max)
      {
            return;
      }
      pivot_index = sublist_builder(elements, min, max);
      quick_sort(elements, min, pivot_index - 1);
      quick_sort(elements, pivot_index + 1, max);
}
 
int sublist_builder(int elements[], int min, int max)
{
      int temp, x, y, pivot_element;
      x = min + 1;
      y = max;
      pivot_element = elements[min];
      while(x <= y)
      {
            while((elements[x] < pivot_element) && (x < max))
            {
                  x++;
            }
            while(elements[y] > pivot_element)
            {
                  y--;
            }
            if(x < y)
            {
                  temp = elements[x];
                  elements[x] = elements[y];
                  elements[y] = temp;
                  x++;
                  y--;
            }
            else
            {
                  x++;
            }
      }
      elements[min] = elements[y];
      elements[y] = pivot_element;
      return y;
}
