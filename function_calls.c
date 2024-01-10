// Functions: With their prototype declaration, call and definition

#include<stdio.h>

// This is function declaration
void message(); // It declares that message is a function with no return value[void]

int main()
{
	printf("\nYou are inside the main() function");
	
	// This is a function call
	message(); //It will start the execution of the statements inside function message
	
	printf("\nNow you have came back to main() function");
	return 0;
}

// Function Definition (It decides what to execute)
void message()
{
	printf("\nNow You are inside message() function");
	printf("\nThis is the last statement of the message() function");
}
