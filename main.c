/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int addNumbers(int num1, int num2);
int main()
{
  int number1, number2, result;
  printf ("Please enter the first number : ");
  scanf ("%d", &number1);
  printf ("Now enter the second number : ");
  scanf ("%d", &number2);
  result = addNumbers (number1, number2);
    
    /*Giving the result out*/
    
  printf ("%d", result);
  return 0;
}

int addNumbers(int num1, int num2)
{
  return num1 + num2;
}
