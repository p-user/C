#include <stdio.h>
#include <stdlib.h>
void insertionSort(int array[], int size){
	int i,j,temp;
	for ( i = 0; i < size; i++)
	{
		for ( j = i; j >= 0; j--)
		{
			if (array[j+1]<array[j])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int arr[]={7,3,5,8,2,9,4,15,6};
	insertionSort(arr,9);
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n", arr[i] );
	}
	return 0;
}
