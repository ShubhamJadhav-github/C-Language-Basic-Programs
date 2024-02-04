#include<stdio.h>
#include<conio.h>
#define square(x) (x*x)
int main()
{
	int a;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("\n\nThe square is: %d",square(a));
	getch();
	return 0;
}
