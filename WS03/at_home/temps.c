//==============================================
// Name:           Albert Joshua Canicosa
// Student Number: 144404191
// Email:          ajcanicosa@myseneca.ca
// Section:        NKK
// Workshop:       3 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
#include<stdio.h>
#define NUMS 4

int main() {
	int high, low, d; 
	int highest = 0, lowest =0;
	double mhi=0, mlo=0, mean=0;
	int hiDay=0, loDay=0;


	

	printf("---=== IPC Temperature Analyzer ===---\n");
	for (d = 1; d <= NUMS;d++)
	{
		printf("Enter the high value for day %d: ", d);
		scanf("%d", &high);
		printf("\n");
		printf("Enter the low value for day %d: ", d);
		scanf("%d", &low);
		printf("\n");
		
		

		while (high < low || high >40 || low < -40) {
			
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");
			printf("Enter the high value for day %d: ", d);
			scanf("%d", &high);
			printf("\n");
			printf("Enter the low value for day %d: ", d);
			scanf("%d", &low);
			printf("\n");
			}
		
		if (highest < high) {
			highest = high;
			hiDay = d;
		}

		if (lowest>low) {
			lowest = low;
			loDay = d;
		}
		
		mlo=mlo + low;
		mhi = mhi + high;
	}
	mlo = mlo/NUMS;
	mhi = mhi / NUMS;
	mean = mhi + mlo;
	mean = mean / 2;
	printf("The average (mean) LOW temperature was: %.2lf\n", mlo);
	printf("The average (mean) HIGH temperature was: %.2lf\n", mhi);
	printf("The average (mean) temperature was: %.2lf\n", mean);
	printf("The highest temperature was %d, on day %d\n", highest, hiDay);
	printf("The lowest temperature was %d, on day %d\n", lowest, loDay);
	
	return 0;

}
