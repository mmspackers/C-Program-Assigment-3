// --------------------------------------------------------------------------------
// Name: Matthew Smith
// Class: SET 151
// Abstract: Assignment 3 / This program tests loops
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes – built-in libraries of functions
// --------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// --------------------------------------------------------------------------------
// Constants
// --------------------------------------------------------------------------------
const long lngARRAY_SIZE = 100;

// --------------------------------------------------------------------------------
// User Defined Types (UDT)
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Prototypes
// --------------------------------------------------------------------------------


// --------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the program starts
// --------------------------------------------------------------------------------
void main()
{
	// Variables needed for the loops
	int intIndex = 0;
	int intOddIndex = 0;
	int intNegativeEvenIndex = 0;
	int intThirdNumber = 0;
	int intThirdNumberCount = 0;
	int intTotal = 0;
	int intOddTotal = 0;
	int intEvenTotal = 0;
	int intThirdNumberTotal = 0;
/*
	// --------------------------------------------------------------------------------
	// Problem #1 - Print all the whole numbers from 1 to 100.
	// --------------------------------------------------------------------------------
	printf( "Problem #1 - Print all the whole numbers from 1 to 100.\n" );
	fflush(stdout);

	for ( intIndex = 1; intIndex <= 100; intIndex += 1 )
	{
		printf("%d, ", intIndex);

		// Move to a new line every 10 numbers
		if (intIndex % 10 == 0)
		{
			printf( "\n" );
		}
		
	}

	printf( "\n" );
	printf( "\n" );



	// --------------------------------------------------------------------------------
	// Problem #2 - Add all the whole numbers from 1 to 100 and print the total
	// --------------------------------------------------------------------------------
	printf("Problem #2 - Add all the whole numbers from 1 to 100 and print the total.\n");

	for (intIndex = 1; intIndex <= 100; intIndex += 1)
	{
		intTotal += intIndex;
	}

	printf( "The sum of whole numbers is: %d\n", intTotal );
	
	printf( "\n" );
	printf( "\n" );

	// --------------------------------------------------------------------------------
	// Problem #3 - Add all Odd whole numbers from 7 to 313 and print the total
	// --------------------------------------------------------------------------------
	printf("Problem #3 - Add all Odd whole numbers from 7 to 313 and print the total.\n");

	for (intOddIndex = 7; intOddIndex <= 313; intOddIndex += 2)
	{
		intOddTotal += intOddIndex;
	}

	printf("The sum of all Odd whole numbers is: %d\n", intOddTotal);

	printf("\n");
	printf("\n");
*/
	// --------------------------------------------------------------------------------
	// Problem #4 - Add all Even whole numbers from -2 to -146 and print the total
	// --------------------------------------------------------------------------------
	printf("Problem #4 - Add all Even whole numbers from -2 to -146 and print the total.\n");

	for ( intNegativeEvenIndex = -2; intNegativeEvenIndex >= -146; intNegativeEvenIndex += -2 )
	{
		intEvenTotal += intNegativeEvenIndex;
	}

	printf("The sum of all Even whole numbers is: %d\n", intEvenTotal);

	printf( "\n" );
	printf( "\n" );

	// --------------------------------------------------------------------------------
	// Problem #5 - Add every 3rd number from 2000 to -60 and print total
	// --------------------------------------------------------------------------------
	printf( "Problem #5 - Add all 3rd whole numbers from 2000 to -60 and print the total.\n" );

	for ( intThirdNumber = 2000; intThirdNumber >= -60; intThirdNumber -= 3 )
	{
		intThirdNumberCount += intThirdNumber;

		intThirdNumberTotal += intThirdNumberCount;
	}

	printf( "The sum of all Third numbers is: %d\n", intThirdNumberTotal );


	printf( "\n" );
	printf( "\n" );

	// --------------------------------------------------------------------------------
	// Problem #6 - Loop sum of numbers from 1 to 100 entered and print square root
	// --------------------------------------------------------------------------------
	printf( "Problem #6 - Input a number from 1 to 100 and the square root of the sum will display.\n" );





	// --------------------------------------------------------------------------------
	// Problem #7 - 
	// --------------------------------------------------------------------------------




	// --------------------------------------------------------------------------------
	// Problem #8 - 
	// --------------------------------------------------------------------------------




	// --------------------------------------------------------------------------------
	// Problem #9 - 
	// --------------------------------------------------------------------------------




	system("pause");

}
