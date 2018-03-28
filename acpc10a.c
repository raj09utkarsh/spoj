#include<stdio.h>
#include<math.h>
int main()
{
	long int a, b, c;
	while(1)
	{
		scanf("%ld %ld %ld", &a, &b, &c);
		if(a==b && b==c && a==0)
		{
			break;
		}
		else if(b-a == c-b)
		{
			printf("AP %ld\n", c + (c-b));
		}
		else if( (float)b/(float)a == (float)c/(float)b )
		{
			long int t = (float)b/(float)a;
			long int ans = a*pow(t, 3);
			printf("GP %ld\n", ans);
		}
	}
	return 0;
}