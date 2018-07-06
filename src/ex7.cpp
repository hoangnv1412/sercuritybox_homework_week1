// ex7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int GCD(int a, int b){
	int r;
	while (b != 0){
      r = a % b;
      a = b;
      b = r;
	}
	return a;
}
int _tmain()
{
	int a,b;
	int gcd, lcm;
	scanf("%d %d",&a, &b);
	if (a>b) gcd = GCD(a,b);
	else gcd = GCD(b,a);
	
	lcm = (a * b) / gcd;
	printf("UCLN: %d\n",gcd);
	printf("BCNN: %d\n",lcm);

	return 0;
}

