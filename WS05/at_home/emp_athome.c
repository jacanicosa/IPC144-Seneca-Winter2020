//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Workshop:       5 (at-home)
//==============================================

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements




#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define  SIZE 4

// Declare Struct Employee
/* main program */
int main(void) {
	struct Employee
	{

		int id;
		int age;
		double salary;
	};

	int option = 0;
	int empid= -1;
	int edit = -1;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct Employee Employee[SIZE] = { { 0 } }; //double brackets otherwise gcc will make a warning
	int i;
	int employees = 0;

	do {
		
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");

		printf("Please select from the above options: ");

		
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:	
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1: 

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			
			for (i = 0; i < SIZE; i++) {

				if (Employee[i].id > 0) {  
					printf("%6d%9d%11.2lf\n", Employee[i].id, Employee[i].age, Employee[i].salary);
				}
			}
			printf("\n");
			break;
		case 2:	

			printf("Adding Employee\n");
			printf("===============\n");

			
			if (employees < SIZE) { 

				for (i = 0; i < SIZE; i++) {

					if (Employee[i].id == 0) { 
						printf("Enter Employee ID: ");
						scanf("%d", &Employee[i].id);
						printf("Enter Employee Age: ");
						scanf("%d", &Employee[i].age);
						printf("Enter Employee Salary: ");
						scanf("%lf", &Employee[i].salary);
						printf("\n");
						employees++;  
						i = SIZE;
					}
				}
			}
			else {
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}


			break;

			
		case 3: 
			printf("Update Employee Salary\n");
			printf("======================\n");
			
			printf("Enter Employee ID: ");
			scanf("%d", &empid);
			do {
				printf("*** ERROR: Employee ID not found! ***\n");
				printf("Enter Employee ID: ");
				scanf("%d", &empid);
				
				
				for (i=0; i < SIZE; i++) {
					
					if (empid == Employee[i].id) {
						edit = i;
						i = SIZE;
						
					}
					
				}
				
			} while (edit < 0);
			

			


			printf("The current salary is %.2f\n", Employee[edit].salary);
			printf("Enter Employee New Salary: ");
			scanf("%lf", &Employee[edit].salary);
			printf("\n");

			edit = -1;
			break;
			
		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			
			printf("Enter Employee ID: ");
			scanf("%d", &empid);
			do {
				printf("*** ERROR: Employee ID not found! ***\n");
				printf("Enter Employee ID: ");
				scanf("%d", &empid);

				for (i=0; i < SIZE; i++) {
					if (empid == Employee[i].id) {
						edit = i;
						printf("Employee %d will be removed\n\n", empid);
						Employee[i].id = 0;
						employees--;
						i = SIZE;
					}
				
				}
			} while (edit < 0);

			edit = -1;

			break;
			
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);


	return 0;
}