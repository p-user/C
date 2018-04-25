#include <stdlib.h>
#include <stdio.h>
void quickSort(int array[], int start, int end){
	int index=start;
	int pivot=array[end];
	int temp;
	if (start<=end){

		for (int i = index; i < end; i++)
		{
			if (array[i]<=pivot)
			{
				temp=array[i];
			array[i]=array[index];
			array[index]=temp;
			index++;
			}
			
		}
			}
	temp=array[index];
	array[index]=array[end];
	array[end]=temp;
	quickSort(array, start, index-1);
	quickSort(array,index+1,end);
}
 
 int main(int argc, char const *argv[])
 {
 	int arr[]={35,30,45,12,90};
 	quickSort(arr, 0, 4);
 	for (int i = 0; i < 5; i++)
 	{
 		printf("%d\n", arr[i] );
 	}
 	return 0;
 }