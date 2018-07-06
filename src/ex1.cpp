// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

int _tmain()
{
	int n,i,j;
	int a[3],temp;
    scanf("%d",&n);
	for (i= 0; i< 3; i++){
		a[i] = n%10;
		n = n/10;
	}

	for (i= 0; i< 2; i++){
		for (j= i+1; j< 3; j++){
			if (a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i= 0; i< 3; i++){
		printf("%d",a[i]);
	}
	printf("\n");
    return 0;
}
