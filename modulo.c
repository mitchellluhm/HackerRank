#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main()
{
	//get the length
    int a_len;
    scanf("%d", &a_len);
    
	//add input numbers into array
	int a[a_len];
	for (int i = 0; i < a_len; i++) 
	{
		scanf("%d", &a[i]);
	}
	
	//calculate answer
    int ans = 1;
    for (int i = 0; i < a_len; i++)
    {
	
        ans = (ans * a[i]) % ((int) pow(10, 9) + 7); 
        
    }

	//print answer
    printf("%d\n", ans); 
    return 0;
}
