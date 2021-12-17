//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>
int main() {
	int days, d, numenter;
	int hi[10];
	int lo[10];
	int hiday = 0, highest = 0,loday = 0, lowest= 0;
	double sum=0,mean;

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
		printf("%d %4d %5d\n", d, hi[d], lo[d]);
		
			if (hi[d] > highest) {
				highest = hi[d];
				hiday = d;
			}

			if (lo[d] < lowest) {
				lowest = lo[d];
				loday = d;
			}	

	}
	printf("\n");
	
		
		printf("The highest temperature was %d, on day %d\n", highest, hiday);
		printf("The lowest temperature was %d, on day %d\n", lowest, loday);
		printf("\n");

		do {
			printf("Enter a number between 1 and %d to see the average " 
				"temperature for the entered number of days, enter a negative number to exit: ", days);
			scanf("%d", &numenter);
			printf("\n");
			
			while(numenter ==0 || numenter > days) {
				printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", days);
				scanf("%d", &numenter);
				printf("\n");

			}
			if (numenter > 0) {
				for (d = 1; d <= numenter; d++)
				{
					sum = sum + hi[d] + lo[d];
				}
				 mean = (sum / (numenter* 2));
				printf("The average temperature up to day %d is: %.2lf", numenter, mean);
				printf("\n\n");
				sum = 0;
			}
			

		} while (numenter >= 0);

		printf("Goodbye!\n");
	return 0;
}