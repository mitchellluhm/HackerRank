#include <stdio.h>

int main()
{
	const char *days[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY",
		"FRIDAY", "SATURDAY", "SUNDAY"};
	long t; // test cases
	scanf("%li\n", &t);
	long topics[t];
	long schedule[t][7];
	// initilizae arrays
	for (int i = 0; i < t; i++) {
		scanf("%li\n", &topics[i]);
		for (int j = 0; j < 7; j++) {
			scanf("%li\n", &schedule[i][j]);
		}
	}
	// analyze
	for (long i = 0; i < t; i++) {
		int done = 0;
		long sum = 0;
		while (done == 0) {
			for (int j = 0; j < 7 && done == 0; j++) {
				sum += schedule[i][j];	
				if (sum >= topics[i]) {
					done = 1;
					printf("%s\n", days[j]);
				}
			}	
		}
	}
	return 0;
}
