#include <stdio.h>

int getNextGunHolder(int i, int ppl[], int n)
{
	int found = 0;
	while (found == 0) {
		printf("i is %d person i stat is %d", i, *(ppl + i));
		if (i >= n) i = 0;
		else i++;
		if ( *(ppl + i) == 1) {
			found = 1;
			return i;
		}
	}

}

int kill(int gunHolder, int k, int *S, int ppl[], int n)
{
	int i = gunHolder - 1;
	int n_to_kill = gunHolder % k;
	while (n_to_kill > 0) {
		if (i >= n) i = 0;
		else i++;
		if ( *(ppl + i) == 1 ) {
			*(ppl + i) = 0; // set this person's status to dead
			*S = *S - 1; // one left survivor
			n_to_kill--; // one less to kill	
		}
	}	
	return getNextGunHolder(i, &ppl[0], n);
}

int main()
{
	int N, K, X;
	scanf("%d %d %d\n", &N, &K, &X);
	int S = N; // survivors
	int *XP = &X;

	int people[N];
	for (int i = 0; i < N; i ++)
		people[i] = 1; // everyone alive by default
	
	while (S > 1) {
		printf("S is %d\n", S);
		*XP = kill(*XP, K, &S, &people[0], N); 
		printf("after killing *XP is %d\n", *XP);
	}
	printf("%d\n", getNextGunHolder(*XP, &people[0], N));

	return 0;
}
