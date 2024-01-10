//Command Line Arguments
#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	printf("\nNumber of arguments passed = %d\n\n", argc-1);

	if(argc >= 2)
	{
		for(int i = 1; i<argc; i++)
			printf("\nArgument number %d = %s", i, argv[i]);
	}

	return 0;
}
