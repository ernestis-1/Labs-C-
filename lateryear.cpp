#include<cassert>

int LaterInYear(int fd, int sd)
{
	assert(fd >= 1 && fd <= 31);
	assert(sd >= 1 && sd <= 31);
	if (fd < sd)
		return sd;
	else
	{
		return fd;
		
	}

}