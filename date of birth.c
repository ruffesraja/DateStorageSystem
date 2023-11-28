#include<stdio.h>
#include<stdlib.h>
void display_dob(unsigned short int);
int main(){
	int date,month,year;
	//year range is 1900 to 2027
	printf("Enter yout date of birth [dd/mm/yy] : ");
	scanf("%d/%d/%d",&date,&month,&year);
	unsigned short int dob=0;
	/*dob += date;
	dob += (32 * month);
	dob += (512 * (year-1900));
	display_dob(dob); */
	dob += date;
	dob += (month << 5);
	dob += ((year-1900) << 9);
	display_dob(dob);
	return EXIT_SUCCESS;
}
void display_dob(unsigned short int dob){
	int date = dob % 32;
	int month = (dob % 512) >> 5;
	int year = (dob >> 9) + 1900;
	printf("%d/%d/%d",date,month,year);
}