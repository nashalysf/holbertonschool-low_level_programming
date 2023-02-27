#include "main.h"
/**
*_isupper- Entry point
*
*Description: checks for uppercase char
*Return: 0. (Success)
*/
int _isupper(int c)
{
	int x,y;
	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = 32; y <= 126; y++){
		if (x == y){
		return (1);
		}
		else {
		return (0);
		}
		}
	if (x == c)
	{
	return (0);
	}
	else
	{
	return (1);
}
}
}
return (0);
}
