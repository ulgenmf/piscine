#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

#define BUF_SIZE 4096

int		ft_display(char *path)
{
	int fd;
	char buf;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (1);
}

int		main(int ac, char *av[])
{
	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else if (ac == 2)
	{
		if (!(ft_display(av[1])))
			write(1, "Cannot read file.\n", 18);
	}
	return (0);
}
