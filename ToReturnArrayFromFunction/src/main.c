#include<stdio.h>
#include<stdlib.h>

//To return the integer array from the function, you should:
//      - Store the size of the array to be returned in the result_count variable
//      - Allocate the array statically or dynamically

int* return_integer_array_using_static_allocation(int* result_count)
{
	*result_count = 5;

	static int a[5] = { 1, 2, 3, 4, 5 };

	return a;
}

int* return_integer_array_using_dynamic_allocation(int* result_count) {
	*result_count = 5;

	int *a = (int*)malloc(sizeof(int)*5);

	for (int i = 0; i < 5; i++) {
		*(a + i) = i + 1;
	}

	return a;
}

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	int arrayLength;
	int *arrayPtr = return_integer_array_using_static_allocation(&arrayLength);
	printf("Array Element :");
	for(int i=0;i<arrayLength;i++){
		printf(" %d",arrayPtr[i]);
	}
	arrayPtr = return_integer_array_using_dynamic_allocation(&arrayLength);
	printf("\nArray Element :");
	for (int i = 0; i < arrayLength; i++) {
		printf(" %d", arrayPtr[i]);
	}

}



