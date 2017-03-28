#include <stdio.h>
#include <stdlib.h>
#include "keyword.h"
#include "lexer.h"

int main(int argc, char** argv){
	printf("%i\n",argc);
	for(int i = 0; i < argc; i++){
		printf("%s\n",argv[i]);
	}
}

