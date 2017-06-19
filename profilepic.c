#include <stdio.h>



int main()
{
	//get L
	int L;
	scanf("%d", &L);
	
	//get N
	int N;
	scanf("%d", &N);

	//create 2d array to store dimensions
	int pDimensions[N][2];

	//get photo dimensions
	for(int i=0; i < N; i++)
	{
		int W, H;
		scanf("%d %d", &W, &H);	
		pDimensions[i][0] = W;
		pDimensions[i][1] = H;
	}

	//determine issues
	for(int i=0; i < N; i++)
	{
		if((pDimensions[i][0] < L) > 0 || (pDimensions[i][1] < L) > 0) {
			printf("UPLOAD ANOTHER");
		}
        else {
			if(1 == (pDimensions[i][0] == pDimensions[i][1])) {
				printf("ACCEPTED");
			}
			else {
				printf("CROP IT");
			} 
		}
		printf("\n");

	}

	return 0;
		
}
