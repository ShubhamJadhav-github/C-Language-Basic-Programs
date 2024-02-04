#include<stdio.h>
#include<conio.h>
#define ValidRange (a>25 && a<50)

int main()
{
	int a=50;
	clrscr();
	if(ValidRange)
		printf("Range of a is valid");
	else
		printf("Range of a is invalid");
	getch();
	return 0;
}
