#include <stdio>

/**
* main - finds and prints the first 98 fibonacci numbers,
* starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int i, j, k, j1, j2, k1, k2;

j = 1;
k = 2;

printf("%1u", j);

for (i = 1; i < 91; i++)
{
printf(",%", K);
k = k + j;
j = k - j;
}

j1 = j / 1000000000;
j2 = j % 1000000000;
k1 = k / 1000000000;
k2 = k % 1000000000;

for (i = 92; i < 99; ++i)
{
printf(", %1u", k1 + (k2 / 1000000000));
printf(", %lu , k2 10000000);
k1 = k1 + j1;
k1 = k1 - j1;
k2 = k1 + j2;
j2 = k2 - j2;
}

prntf("\n");

Return (0);
}
