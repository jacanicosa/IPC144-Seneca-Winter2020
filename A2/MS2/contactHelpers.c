//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void) {
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void) {
    printf("(Press Enter to Continue)");
    clearKeyboard();
}

// getInt function definition goes here:
int getInt(void) {
	char nl = 'x';
	int value;
	scanf("%d%c", &value, &nl);

	do {
		if (nl != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			scanf("%d%c", &value, &nl);

		};

	} while (nl != '\n');

	return value;
}

// getIntInRange function definition goes here:
int getIntInRange(int low, int high) {
	int value = getInt();

	while (value < low || value > high) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", low, high);
		value = getInt();
	};

	return value;
}

// yes function definition goes here:
int yes(void) {
	char option;
	char nl;

	do {
		scanf("%c%c", &option, &nl);
		if (nl != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			;
		}
		else if (option == 'y' || option == 'Y') {
			return 1;
		}
		else if (option == 'n' || option == 'N') {
			return 0;
		}

	} while ((option != 'y' && option != 'Y' && option != 'n' && option != 'N') || (nl != '\n'));

	return 0;
}

// menu function definition goes here:
int menu(void) {
	int value = 0;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");

	printf("Select an option:> ");
	value = getIntInRange(0, 6);

	return value;

}

// contactManagerSystem function definition goes here:
void contactManagerSystem(void)
{
	int value;
	int option = 0;

	while (option == 0)
	{
		value = menu();
		switch (value)
		{
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			option = yes();
			printf("\n");
			if (option == 1)
			{
				printf("Contact Management System: terminated\n");
			}
			break;
		default:
			break;
		}
	}
}


