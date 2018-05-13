#include <stdlib.h>
#include <stdio.h>
void selectionsort(int array[],int size){
	int i, j, enk;
	for ( i = 0; i < size; i++)
	{
		enk=array[i];
	for (j = i+1; j < size; j++)
	{
		if (array[j]<enk)
		{
			int temp=array[i];
			enk=array[j];
			array[i]=enk;
			array[j]=temp;

		}
	}
	}
}
int main(int argc, char const *argv[])
{
	int arr[]={7,3,5,8,2,9,4,15,6};
	selectionsort(arr,9);
	for (int i = 0; i < 9; ++i)
	{
	    printf("%d\n",arr[i] );
	}
	return 0;
}