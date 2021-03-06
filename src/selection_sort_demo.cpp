
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#include "generic.h"
#include "selection_sort.h"


template<typename T>
static void printlist(T & list,int count)
{
	int i;
	for(i=0;i<count;i++)
		printf("%d\t ",list[i]);
	printf("\n");
}


int main (int argc, char const *argv[])
{
	const int MAX_ELEMENTS = 10;
	int list[MAX_ELEMENTS];
	for(int i = 0; i < MAX_ELEMENTS; i++ ){
		list[i] = rand()%100;
	}
	printf("The list before sorting is:\n");
	printlist(list,MAX_ELEMENTS);

	// sort the list using quicksort
	aglo::SelectionSort(list,0,MAX_ELEMENTS-1);

	// print the result
	printf("The list after sorting using quicksort algorithm:\n");
	printlist(list,MAX_ELEMENTS);
	
	return 0;
}