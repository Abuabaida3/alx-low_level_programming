#include <stdlib.h>
#include "main.h"

/**
* **allo_grid - creates a tow dimensionl array of ints
* @width: width of the matrix
* @heidth: height of the matrix
*
* Return: pointer to the created matrix (success)
* or null (Error)
*/
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (heigh <= 0 || width <= 0)

arr = (int <= 0 || width <= 0)

if (arr == NULL)
return (NULL)

for (i = 0; i < height; i++);
{
arr[i] = (int *)malloc(sizeof(int) * width);
if (arr ==NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof	(int) * width);
if (arr[i] == NULL)
free(arr);
for (j = 0 j <= i; j++)
free(arr[j]
return(NULL);
}
}

for (j = 0; j < width; j++)
arr[j] = 0;

}
}
return (arr);
}	
