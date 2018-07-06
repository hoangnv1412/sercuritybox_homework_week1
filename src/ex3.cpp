// ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int cal(int interval){
	int res;
	if (interval <= 0 ) return 0;

	res = 10000;
	if (interval <= 1000) return res;

	interval -= 1000;
	res += interval*15/2;
		
	if (interval <= 30000) return res;
	
	interval -= 30000;
	res += interval/10 * 8;

	return res;
}


int main()
{
	int a[20]={0};
	int count =0, c=0;
	int i =0;
	int total = 0;
	int interval = 0;
	scanf("%d",&interval);
	total = cal(interval);
	while (total > 0){
		a[i++] = total % 10;
		total = total / 10;
		c++;
	}
	i--;
	if (c % 3 == 2) count =1;
	else if (c % 3 == 1) count =2;
	else if (c % 3 == 0) count =0;
	while ( i >=0 ){
		printf("%d",a[i--]);
		count ++;
		if ( (count % 3 ==0) && (i > 0) ) printf(".");
	}
	printf(" VND\n");
	return 0;
}

