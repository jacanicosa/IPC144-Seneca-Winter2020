//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Workshop:       5 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2 

/* main program */
int main(void) {

	int option = 0;
	int i = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	struct emp { 
		int ID_Number;
		int age;
		double salary;
	};

	struct emp Employee[SIZE] = { {0,0,0},{0,0,0} };

	do {

		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {

		case 0:	// Exit the program
			printf("\n");
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1:// Display Employee Data

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++) {
				if (Employee[i].ID_Number > 0) {
					printf("%6d%9d%11.2lf", Employee[i].ID_Number, Employee[i].age, Employee[i].salary);
					
					printf("\n");
				}
			}

			printf("\n");
			

			i = 0;
			break;

		case 2:		// Adding Employee

			printf("Adding Employee\n");
			printf("===============\n");

			if (i < SIZE) 
			{
				printf("Enter Employee ID: ");
				scanf("%d", &Employee[i].ID_Number);
				if (Employee[i].ID_Number < 0) {
					printf("Invalid Employee ID. Try again: ");
					scanf("%d", &Employee[i].ID_Number);
				}

				printf("Enter Employee Age: ");
				scanf("%d", &Employee[i].age);
				if (Employee[i].age < 14) {

					printf("Invalid age. Try again: ");
					scanf("%d", &Employee[i].age);
				}

				printf("Enter Employee Salary: ");
				scanf("%lf", &Employee[i].salary);
				if (Employee[i].salary < 0) {
				
					printf("Invalid salary. Try again: ");
					scanf("%lf", &Employee[i].salary);
				}
				printf("\n");
			}
			else {
				printf("ERROR!!! Maximum Number of Employees Reached\n");
				printf("\n");
			}
			i++; 
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n");
			printf("\n");
		}


	} while (option != 0);

	return 0;
}
