// Classwork 9/26/22 - Systems Programming
// Example of using pointers to point to array

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3]; // create array with 3 elements
	int* p;

	a[0] = 4;
	a[1] = 5;
	a[2] = 6;


	// Why can we write the following line?
	// Because array points to stuff too?
	p = a; // will point to object at a[0]

	printf("What is *p? It is %d \n", *p);

	p = a + 1; // will point to object at a[1]
	printf("What is *p? It is %d \n", *p);

	p = a + 2; // will point to object at a[2]
	printf("What is *p? It is %d \n", *p);

	p = p - 2; // will point back to a[0]
	printf("What is *p? It is %d \n", *p);

}

