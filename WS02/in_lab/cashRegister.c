//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>
int main(void)
{
	const float quarters = 0.25;
	double amount, bal, diff;
	int loonies, cents;



	printf("Please enter amount to be paid:$");
	scanf("%lf", &amount);
	loonies = (int)amount;

	printf("Loonies required: %i, ", loonies);
	bal = amount - loonies;
	printf("balance owing $%.2lf\n", bal);
	cents = bal / quarters;
	printf("Quarters required: %i, ", cents);
	diff = bal - (double)cents * quarters;
	printf("balance owing $%.2lf\n", diff);







	return 0;


}
