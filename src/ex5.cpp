// ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


bool is_leapyear(int year){
	if (year % 400 == 0) return true;
	else if ( (year % 4 ==0) && (year % 100 != 0) ) return true;
	else return false;
}

bool right_format(int day, int month, int year){
	if ( (day < 0) || (month < 0) || (year < 0) || (day>31) || (month > 12) ) return false;
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			if (day <=31) return true;
			else return false;
			break;
		}
			
		case 4: case 6: case 9: case 11: 
		{
			if (day <=30) return true;
			else return false;
			break;
		}

		case 2:
		{
			if ( is_leapyear(year) ){
				if (day <= 29) return true;
				else return false;
			}
			else {
				if (day <= 28) return true;
				else return false;
			}
			break;
		}
		default :
			break;
	}


}
int _tmain()
{
	int day, month, year;
	printf("Ngay: ");
	scanf("%d",&day);
	printf("Thang: ");
	scanf("%d",&month);
	printf("Nam: ");
	scanf("%d",&year);
	
	if ( right_format(day,month,year) ){
		if (is_leapyear(year)) printf("Nam nhuan\n");
		else printf("Khong phai nam nhuan\n");
	}
	else printf("Khong hop le\n");
	return 0;
}

