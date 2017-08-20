#include <stdio.h>

int main()
{
	int z = 1;
	int* zp = &z;
	printf("%d\n", z);
	*zp = 5;
	printf("%d\n", z);
	int n;
	scanf("%d", &n);
	//printf("%d", n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int s1=0;
	int s2=0; 
	int s3=0;
	int* ps1 = &s1;
	int* ps2 = &s2;
	int* ps3 = &s3;

	for (int i = 0; i < n; i++) {
		if ( (i + 1) % 3 == 0 ) *ps3 += arr[i];
		else if ( (i - 1) % 3 == 0 ) *ps2 += arr[i];
		else *ps1 += arr[i];
	}
	printf("%d", s1);
	return 0;
}
