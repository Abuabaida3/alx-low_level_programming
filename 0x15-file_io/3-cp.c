#include "main.h"
/**
* main - entry point
* @ac: argument count
* @av: array of argument tokens
* Return: 0 on success
*/
int main(int ac char *av[])
{
int fd_from, fd_to, num_bytes, w;
mode_t permission = SIRUSR | S_IWUSR | S_IRGRP | S_IROTH;
char buffe[BUFFSIZ];
if (ac != 3)
dprintf(STDERR_FILENO, "usage:cp file_from file_to\n"),exit(97);
fd_from = open(av[1], O_RDONLY);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: cant't read from file%s\n", av[1], exit(98);
fd_to = opent(av[2], O_CREAT | O_WRONLY | O_TRUNC, PERMSSION);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: cant't write to %s\n"), av[2]),exit(99);
num_bytes = 1;
while (num_bytes)
{
num_bytes = read(fd_from, buffer,BUFSIZ);
if (num_bytes == -1)
dprintf(STDERR_FILENO, "Error:can't read from file %s\n", av[1]), exit(98);
if (num_bytes > 0)
{
w = write(fd_to, buffer, num_bytes);
if (w != num_bytes || w == -1)
dprintf(STDERR_FILENO, "Error: can;t write to %s\n", av[2]), exit(99);
}
}
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_from), exit(100);
if(close(fd_to == -1)
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_to), exit(100);
return (0);
}
