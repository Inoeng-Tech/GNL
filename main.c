#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int fd;
	char *str;
	
    fd = open("/Users/afridasufi/Documents/GNL/sample.txt", O_RDONLY);
	str = get_next_line(fd);
    while (!str)
	{
		printf("%s", str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
