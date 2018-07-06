// ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain()
{
	int h;
	scanf("%d",&h);
	for (int i =0; i< h; i++){
		for (int j =0; j< h*2; j++){
			if (j < h-i) printf("   ");
			else if (j > h+i) { printf("\n"); break; }
			else printf(" * ");
		}
	}
	printf("\n");
	return 0;
}

