//Program To Print a String "HelloWorld"


#include<stdio.h>       //Preprocessor directive to include a standard input - output hearder file
#include<conio.h>       //Preprocessor directive to include a console input - output hearder file

int main()              //main function with return as an int
{

  //Body of main Function
  printf("Hello World");//calling function printf() by passing a string "HelloWorld" as an argument
  getch();              //Here the program execution will be paused Because getch() will require an input from keyboard (To hold the screen, so that user can see the output)
  return 0;             //returning an integer value zero
        
}
