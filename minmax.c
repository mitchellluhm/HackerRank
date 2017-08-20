//check if all numbers exist between min and max
#include <stdio.h>

int main()
{
	//get size of array
	int n;
	scanf("%d", &n);

	//get array elements
	int nums[n];
	for(int i = 0; i < n; i++) {
		int inum;
		scanf("%d", &inum);
		nums[i] = inum;
	}

	//determine min
	int min = 101;
	for(int i = 0; i < n; i++) {
		if(nums[i] < min) {
			min = nums[i];
		}
	}
	
	//determine max
	int max = 0;
	for(int i = 0; i < n; i++) {
		if(nums[i] > max) {
			max = nums[i];
		}
	}

	//check if there are no numbers between min and max
	if(max == min || (min + 1) == max) {
		printf("YES\n");
		return 0;
	}

	//numbers inbetween
	int ndif = max - min - 1;
	for(int i = min + 1; i < max; i++) {
		int found = 1; //false
		for(int j = 0; j < n; j++) {
			//we found the next number
			if(nums[j] == i) {
				found = 0;	
			}
		}
		if(found == 1) {
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");

	
	return 0;

}
