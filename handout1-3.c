#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main(){
	pid_t pid=fork();
	if(pid==0){
		fprintf(stderr,"I will take 100 seconds nap!");
		sleep(100);
		fprintf(stderr,"I am awake! Bye now.");
		exit(0);
	}
	else{
		exit(1);
	}
}
	
