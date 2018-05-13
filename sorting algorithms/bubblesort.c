#include <stdio.h>
void bubblesort(int array[], int size){
	int i, j, temp;
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size-j-1; i++)
		{
			if (array[i+1]<array[i])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	int arr[]={7,3,5,8,2,9,4,15,6};
	bubblesort(arr,9);
	for (int i = 0; i < 9; ++i)
	{
	    printf("%d\n",arr[i] );
	}
	
	return 0;
}