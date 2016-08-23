/*
	Sample Prac Question
	Week 5 COMP1917 16s2
	any issues, email rsaber@cse.unsw.edu.au
	but email your tutor first

	Write a function that takes in an array and its length,
	and determine the order of its elements. It's order can be
	one of three:
		- ascending
		- descending
		- neither
	Return the appropriate hash define.

	An array of < 2 elements is considered neither ascending nor descending.
	Duplicate elements are considered to be ascending.

	Compile with: gcc -Wall -Werror -o order order.c
*/

#include <stdio.h>
#include <assert.h>

#define ASCENDING  	0
#define DESCENDING  1
#define NEITHER     2

int findOrder(int array[], int n){

}

// Don't touch this!
int main(int argc, char *argv[]) {
	int a1[] = {1,2,3,4,5,7,8,9,10,11};
	int a2[] = {11,10,9,1,3,2,4,5,6,8};
	int a3[] = {12,11,10,9,8,7,6,5,4,3,2,1};

	assert(findOrder(a1,10) == ASCENDING);
	assert(findOrder(a2,10) == NEITHER);
	assert(findOrder(a3,12) == DESCENDING);

	printf("Well done you passed all the tests. But write some more.\n");
	return 0;
}