#include<stdio.h>
#include<conio.h>
int main()
{
	int time, hrs, min, sec;
	printf("please enter the time in seconds which you want to convert in \nHours \nminute \nseconds \nTime:\t");
	scanf("%d",&time);
	hrs=time/3600;
	min=(time%3600)/60;
	sec=(time%3600)%60;
	printf("THE ENTERED SECONDS AFTER THE CONVERSION IN HOURS MINUTE AND SECOND IS UNDER BELOW \nHOURS:\t %d \nMINUTE:\t %d \nSECOND:\t %d",hrs,min,sec);
	getch();
}
