// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"


// Definition of the fundamentals function.
void fundamentals(void) {

// V2

	 // Print a message indicating the start of the demo.
	printf("*** Start of Measuring Strings Demo ***\n");

	// Declare a second buffer for this part of the demo
	char buffer2[BUFFER_SIZE];  

	do {
		// Prompt for a string, quit with 'q'
		printf("Type a string (q - to quit) :\n");       

		// Read user input into buffer2
		fgets(buffer2, BUFFER_SIZE, stdin);        

		// Clean the newline character.
		buffer2[strlen(buffer2) - 1] = '\0';        

		// If not quitting, print the length of the input string
		if (strcmp(buffer2, "q") != 0)      

			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
	} while (strcmp(buffer2, "q") != 0);  
	// Loop until the user inputs 'q'.


	// Print a message indicating the end of the demo.
	printf("*** End of Measuring Strings Demo ***\n\n");
}
