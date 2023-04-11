#include "main.h"
/**
* _abs - checks the absolute number
* @j: parameter to be checked
* Return: always j
*/
int _abs(int j)
{
if (j < 0)
j = -(j);
else if (j >= 0)
j = j;
return (j);
}
