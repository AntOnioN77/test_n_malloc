#include "jp_tester.h"

void 	*ft_malloc(size_t n)
{
	if (variable_global == 1)
	{
		variable_global = 0;
		return  (NULL);
	}
	else
	{
		variable_global--;
		return(malloc(n));
	}
}