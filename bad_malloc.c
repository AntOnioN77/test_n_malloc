#include "jp_tester.h"

void 	*ft_malloc(size_t n)
{
	if (variable_global == 1)
	{
		return  (NULL);
	}
	else
	{
		variable_global--;
		return(malloc(n));
	}
}