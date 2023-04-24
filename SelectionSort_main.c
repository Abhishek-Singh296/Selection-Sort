#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SelectionSort(int a[], int array_size)
{
    int i,j, smallest,temp;
    for(i=0;i<array_size-1;i++)
    {
      smallest=i;
      for(j=i+1;j<array_size;j++)
      {
          if(a[smallest]>a[j])
          smallest=j;
      }
      if(i!=smallest)
      {
                     temp=a[i];
                     a[i]=a[smallest];
                     a[smallest]=temp;
      }
    }
    printf("\nSeelctionSorted Data :");
    for (i = 0; i < array_size; i++) {
    printf("\t%d", a[i]);
}
}

int main()
{
  int ret;
  int arr[5]={32,5,7,3,72};
  SelectionSort(arr,5);
}
