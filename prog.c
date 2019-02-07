/*
 * main.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Saad
 */


#include <stdio.h>
#include <math.h>
#define TRUE  1
#define FALSE 0

//function declaration
int isPrime (int candidate);

int main (void)
{
	//disable buffer
	setbuf(stdout, NULL);

	//scan the input
	int number;
	printf("Enter a number to check if it is prime: ");
	scanf("%d", &number);

	//Primality test
	int test = isPrime(number);

	//print out result
	if (test == TRUE)
	{
		printf("Number %d is not prime!", number);
	}
	else
	{
	printf("Number %d is a prime number!", number);
	}


}

//function definition
int isPrime (int candidate)
{
	//variables declaration
	int foundRoot = FALSE, i;
	float trial;

	//algorithm to check by trial division
	for (i = 2; i < sqrt(candidate); i++)
	{
		trial = (float) candidate / (float) i;
		if (trial - (int) trial == 0 )
		{
			foundRoot = TRUE ;
			break;
		}
	}

	return foundRoot;
}

