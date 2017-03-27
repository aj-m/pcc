#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	printf("%i\n",argc);
	for(int i = 0; i < argc; i++){
		printf("%s\n",argv[i]);
	}
}

