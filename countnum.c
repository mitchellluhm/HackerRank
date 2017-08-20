#include <stdio.h>

int main(int argc, char *argv[])
{
	int T, N;
	scanf("%d\n", &T);
	scanf("%d\n", &N);

	char istr[N+1];

	scanf("%s", istr);

	
	//digits are between 48 and 57
	int c = 0;
	int on_num = 1; //false
	for (int i = 0; i < N; i++)
	{
		int asc = istr[i];
		//check if digit
		if(47 < asc && asc < 58)
		{
			on_num = 0; //true
		}

		if(on_num == 0 && (asc < 48 || asc > 57))
		{
			on_num = 1;
			c = c + 1;
		}
		
		if(on_num == 0 && i == (N - 1))
		{
			c = c + 1;
		}
	}	
	
	printf("%d\n", c);
	return 0;

}
