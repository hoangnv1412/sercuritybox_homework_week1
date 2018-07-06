// ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain()
{	
	int upperCase =0, lowerCase =0;
	char c;
	while ( (c = getchar()) != '\n') {
		if ( (c >= 65 ) && (c <= 90) ) upperCase++; 
		else if ( (c >= 97 ) && (c <= 122) ) lowerCase++;
	}
	printf("So ki tu hoa: %d\n", upperCase);
	printf("So ki tu thuong: %d\n", lowerCase);
	return 0;
}

