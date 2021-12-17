//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS


// Put your code below:

#include<stdio.h>
#define NUMS 3

int main() {
	int high, low, d;
	printf("---=== IPC Temperature Analyzer ===---\n");

	for (d = 1; d <= NUMS;d++)
	{
		printf("Enter the high value for day %d: ", d);
		scanf("%d", &high);
		printf("Enter the low value for day %d: ", d);
		scanf("%d", &low);
		
		
		while (high < low || high >40 || low < -40) {
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");
			printf("Enter the high value for day %d:", d);
			scanf("%d", &high);
			printf("Enter the low value for day %d:", d);
			scanf("%d", &low);

		}
	}
	
	return 0;
	
}
