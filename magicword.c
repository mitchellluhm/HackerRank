#include <stdio.h>

//from prime.c
int is_prime (int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1; //false
        }
    }
    return 0; //true
}

int main()
{
	int T, N;
	scanf("%d\n", &T);
	scanf("%d\n", &N);

	char oword[N+1];
	scanf("%s", oword);
	char mword[N+1];

	for (int i=0; i<N; i++)
	{
		int asc = oword[i];
		int k = asc;
		int j = asc;
		while (is_prime(k) == 1 && is_prime(j) == 1)
		{
			if (k < 65 + 25) k++;
			if (j > 65) j--;
		}
		
		if (is_prime(k)) asc = k;
		else asc = j;

		mword[i] = asc;

	}
		
	printf("\n%s", mword);

	return 0;


}
