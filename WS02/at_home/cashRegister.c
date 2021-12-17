//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>
int main(void)
{
	
	double amount, tax, bal;
	int loonies, cents, quarters, dimes, nickels, pennies, balmod,diff;


	printf("Please enter amount to be paid:$");
	scanf("%lf", &amount);
	loonies = (int)amount;
	tax = amount * 0.13 + 0.005;


	printf("GST: %.2lf\n", tax);
	amount = amount + tax;
	
	printf("Balance owing: $%.2lf\n", amount);
	loonies = amount;

	printf("Loonies required: %d, ", loonies);
	bal = amount - loonies;
	printf("balance owing $%.2lf\n", bal);
	balmod = bal * 100;
	
	cents = bal / .25;
	printf("Quarters required: %d, ", cents);
	balmod=balmod%25;
	
	printf("balance owing $%.2d\n", balmod);

	

	return 0;


}