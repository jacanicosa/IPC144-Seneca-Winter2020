//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicsoa@myseneca.ca
// Section:        NKK
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include<stdio.h>
#define DAYS 10
int main() {
	int days, d;
	int hi[10];
	int lo[10];
	
	

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	
	
		while (days < 3 || days > 10) {
			printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
			scanf("%d", &days);
			printf("\n");

		}
			for (d = 1; d <= days;d++) {
				printf("Day %d - High: ", d);
				scanf("%d", &hi[d]);
				printf("Day %d - Low: ", d);
				scanf("%d", &lo[d]);
			
	}
	printf("\n");
	printf("Day  Hi  Low\n");
		for (d = 1; d <= days;d++) {
			printf("%d %4d %5d\n", d,hi[d],lo[d]);
			

		}
	return 0;
}
