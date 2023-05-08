#include "main.h"
#define BUF_SIZE 1024
/**
 * main - main function
 * @argc: input arguments
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cp_from, cp_to, num_r, num_w, otp;
	char buf[BUF_SIZE];

	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	cp_to = open(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (cp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	while ((num_r = read(cp_from, buf, BUF_SIZE)) > 0)
		num_w = write(cp_to, buf, num_r);
	if (num_w != num_r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(99);
	}
	otp = close(cp_to);
	if (otp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close cp %d\n", cp_to);
		exit(100);
	}
	return (0);
}
