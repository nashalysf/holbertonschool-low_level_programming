#include "main.h"
/**
*swap_int- Entry point
*@a: first int param
*@b: second int param
*Description: sawp the value between
*two integers
*Return: 0. (Success)
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
