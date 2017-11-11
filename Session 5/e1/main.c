/*
* main.c driver program
*/
#include <stdio.h>
#include "msg.h"

int main(int argc, char *argv[])
{
	char msg_hi[] = { "Hi there, programmer!" };
	char msg_bye[] = { "Goodbye, programmer!" };
	printf("%s\n", msg_hi);
	prmsg(msg_bye);
	return 0;
}
