#include <stdlib.h>
#include <stdio.h>
void shellsort(int array[], int size){
	
	int gap;
	for (gap=size/2; gap > 0 ; gap=gap/2)
	{
		for (int index = gap; index < size; index++)
		{
			for (int k = index-gap; k >=0; k=k-gap)
			{
				if (array[k+gap]>=array[k])
				{
					break;
				}
				else{
					
					int temp=array[k];
					array[k]=array[k+gap];
					array[k+gap]=temp;
				}
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int num;
	int arr[num];
	printf("enter the number of elements you wish to sort\n");
	scanf("%d", &num);
	printf("please enter the array you wish to sort\n");
	for (int i = 0; i < num; i++)

	{
		scanf(" %d", &arr[i]);
	}
	shellsort(arr, num);
	printf("sorted array is :\n");
	for (int i = 0; i < num; ++i)
	{
		printf("%d \t", arr[i] );
	}

	return 0;
}