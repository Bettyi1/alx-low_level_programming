#include "main.h"
/**
* _isalpha -function checks for alphabet
*
* @c: parameter to be checked
*
* Return: 1 if its an alphabet
* and 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 66 && c <= 90))
return (1);
else
return (0);
}
