#include "main.h"
/**
 * string_toupper - This functions changes string from lowercase to upper
 *
 * @az: The character to be written
 *
 * Return: This function returns az
 */
char *string_toupper(char *az)
{
	int i;

	for (i = 0; az[i] != '\0'; i++)
	{
		if ((az[i] >= 'a') && (az[i] <= 'z'))
		{
			az[i] = az[i] - 32;
		}
	}
	return (az);
}
