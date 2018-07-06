// ex8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

int _tmain()
{
	char s[80];
	gets(s);
	printf("%s\n",strrev(s));
	return 0;
}

