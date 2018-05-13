#include <stdlib.h>
#include <stdio.h>



void merge(int array[], int start, int middle,int middle2, int end){
	int temp_array[50];
	int i, j, k;
	i=start;
	j=middle2;
	k=0;
	while(i<=middle && j<=end)
	{
		if (array[i]<array[j])
		{
			temp_array[k++]=array[i++];
			
		}
		else
			temp_array[k++]=array[j++];
			
		
	}
	while(i<=middle)
		temp_array[k++]=array[i++];
			
	
	while(j<=end)
		temp_array[k++]=array[j++];
	
	for ( i = start,j=0; i <=end ;i++, j++)
	{
		array[i]=temp_array[j];
	}
}
void mergesort(int array[], int start , int end){
	int mid;
	if (start<end)
	{
		mid =(start+end)/2;
	mergesort(array, start, mid);
	mergesort(array, mid+1, end);
	merge(array, start, mid, mid+1, end);
	}
	}
	
int main(int argc, char const *argv[])
{
	int arr[]={7,3,5,8,2,9,4,15,6};
    mergesort(arr,0,8);
    for (int i = 0; i < 9; ++i)
    {
        printf("%d\n",arr[i] );
    }
    return 0;
}

