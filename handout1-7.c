#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(){
	if(fork() && fork())
	{
		fork();
	}
	if(fork() || fork())
	{
		fork();
	}
	printf("Hello world\n");
	return 0;	
}
