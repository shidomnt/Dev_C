#include <stdio.h>
 
int main()
{
    int i, n, x;
    int s = 0;
 
    printf("Enter n = ");
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &x);
 
        if(x % 2 != 0) 
		{
		continue;
	}
		else{
		
        s = s + x;
    }
    }
 
    printf("S = %d\n", s);
 
    return 0;
}
