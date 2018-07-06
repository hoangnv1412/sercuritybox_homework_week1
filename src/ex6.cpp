// ex6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void str_del(char *s,int l,int r)
{  
    int n=strlen(s),i;
    for (i = l; i <= n-r; i++)
        s[i] = s[i+r];
}

bool isPunc(char c){
	if ( (c == '.') || (c == ',') ) return true;
	else return false;
}

int _tmain()
{
	char s[100];
	char sEdit[100];
	gets(s);
	int count =0;
	int i =0;

	//space at end point 
	while(s[strlen(s)-1]==' ')
        s[strlen(s)-1]=0;
    
	//space at start point
	for (count ; count < strlen(s); count++){
		if (s[count] != ' ') break;
	}
	str_del(s,0,count);
	
	//all continuous space
	while( i < strlen(s) )   
		//if((s[i]==' ')&&(s[i+1]==' '))
        // str_del(s,i,1);
		if  ( (s[i] == ' ') && (s[i+1] == ' ') ){
				count = 1;
				while (s[i+2] == ' '){
					i++;
					count++;
				}
				str_del(s,i-count+1,count);
				//printf("%c %d\n",s[i],i);
				if ( isPunc(s[i]) ) str_del(s,i-1,1);
			}
		else if ( (s[i] == ' ') && ( isPunc(s[i+1]) ) ) str_del(s,i,1);
        else i++; 
     

	//all continuous dot and coma
	i = 0;
	while( i < strlen(s) )
		if ( ( isPunc(s[i]) ) && ( isPunc(s[i+1]) ) ){
			count = 1;
			while ( isPunc(s[i+2]) ){
				i++;
				count++;
			}
			str_del(s,i-count+1,count);
		}
		else i++;

	printf("%s\n",s);
	
	return 0;
}

