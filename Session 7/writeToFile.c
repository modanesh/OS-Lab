#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
 
int main (void)
{
    int fd;

    char buf1[12] = "hello world";
  
    fd = open("test.txt", O_RDWR);     
     
    write(fd, buf1, strlen(buf1));     
 
    close(fd);
 
    return 0;
}