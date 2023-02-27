#include "main.h"
/**
*_isupper- Entry point
*
*Description: checks for uppercase char
*Return: 0. (Success)
*/
int _isupper(int c)
{
	int x;
	for (x = 'a'; x <= 'z'; x++){
	if (x == c){
	return (1);
	}
	else
	{
	return (0);
}
}
return (0);
}
