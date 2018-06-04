#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
	fork();
	fork();
	fork();
	fprintf(stderr, "Hello\n");
}
