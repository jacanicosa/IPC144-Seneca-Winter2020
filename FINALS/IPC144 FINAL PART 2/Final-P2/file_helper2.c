/* DIGITAL SIGNATURE(S):
   ====================

   List the student author(s) of this code below:

   Fullname                    Seneca Email Address
   --------------------------- ----------------------------
   1)Albert Joshua Canicosa	   ajcanicosa@myseneca.ca
   2)You-Yang Chang			   ychang47@myseneca.ca
   3)Shen Lou				   slou1@myseneca.ca

   +--------------------------------------------------------+
   |                FILE: file_helper.c                     |
   +--------------------------------------------------------+
   |           2  0  2  0  ~  W  I  N  T  E  R              |
   |                 I  P  C  :  B  T  P                    |
   |                 1  4  4  :  1  0  0                    |
   |              FINAL ASSESSMENT PART - 2                 |
   |                                                        |
   |     S  E  N  E  C  A            C  O  L  L  E  G  E    |
   |                                                        |
   |  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  |
   |  !!!      DO NOT ALTER THE CONTENTS BELOW         !!!  |
   |  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  |
   +--------------------------------------------------------+ */

#define _CRT_SECURE_NO_WARNINGS
#include "file_helper2.h"

#define RIDER_NUMBER 3

// clearKeyboard: clear input buffer
void clearKeyboard(void)
{
	while (getchar() != '\n'); // code blocks empty executions
}

// getInt: to make sure user inputs a number
int getInt(void)
{
	char inputNL;
	int input, flag = 1;

	while (flag)
	{
		scanf("%d%c", &input, &inputNL);

		if (inputNL != '\n')
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
		else
		{
			flag = 0;
		}
	}

	return input;
}

// getIntInRange: to make sure if users input the number within the range of the menu
int getIntInRange(int min, int max)
{
	int flag = 1;
	int input;

	while (flag)
	{
		input = getInt();

		if (input < min || input > max)
		{
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}
		else
		{
			flag = 0;
		}
	}

	return input;
}


// displayWelcome: to diplay welcome message
void displayWelcome(void)
{
	printf("******************** Seneca Cycling Race Results ********************\n");
}

// displayHeader for display all riders category
void displayHeaderall(void)
{
	printf("Rider                Age Group   Time   Withdrew\n");
	printf("------------------------------------------------\n");
}

// displayHeader for the top and last riders category
void displayHeadertoplast(void)
{
	printf("Rider                Age Group   Time\n");
	printf("-------------------------------------\n");
}

// displayHeader for winners category
void displayHeaderwinner(void)
{
	printf("Rider                Age Group   Category   Time\n");
	printf("------------------------------------------------\n");
}

// menu: the main menu
int menu(void)
{
	printf("What would you like to do?\n");
	printf("0 - Exit\n");
	printf("1 - Print top %d riders in a category\n", RIDER_NUMBER);
	printf("2 - Print all riders in a category\n");
	printf("3 - Print last %d riders in a category\n", RIDER_NUMBER);
	printf("4 - Print winners in all categories\n");
	printf(": ");

	return getIntInRange(0, 4);
}
