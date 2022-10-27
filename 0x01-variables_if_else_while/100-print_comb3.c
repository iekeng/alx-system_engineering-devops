#include <stdio.h>
#include <stdlib.h>
/**
  *
  *
  */
int main(void)
{
	int units = '0';
	int tens = '0';

	while(tens <= '9')
	{
		while(units <= '9')
		{	if (!(tens == units || tens > units))
			{
				putchar(tens);
				putchar(units);
			}
			units++;
