#include "pcc.h"

int main(int argc, char** argv){
	printf("%i\n",argc);
	for(int i = 0; i < argc; i++){
		printf("%s\n",argv[i]);
	}
	enum RTN srcrtn;
	srcrtn = load_sources(argc, argv, NULL);
	printf("%d\n",srcrtn);
	return 0;
}

enum RTN load_sources(int size, char** sources_arr, FILE* out){
	return OK;
}
enum RTN write_output(int size, unsigned char** output_arr, void* out){
	return OK;
}

