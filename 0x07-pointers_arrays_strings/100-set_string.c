#include "main.h"

/**
 * set_string - Function to set the value of a pointer to a string
 * @s: Pointer to a pointer to a string
 * @to: Pointer to the string to set
*/
void set_string(char **s, char *to)
{
	*s = to;
}
