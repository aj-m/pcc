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

enum RTN load_sources(int size, char** sources_arr, FILE** out){
	int* sizes;
	int exists = 0;
	sizes = malloc(sizeof(int) * size);
	// Store filesizes in array, nonexistent files have size -1
	for(int i = 0; i < size; i++){
		sizes[i] = file_exists(sources_arr[i]);
		if(!exists && (sizes[i] != -1)) exists = 1;
	}
	for(int i = 0; i < size; i++){
		if(sizes[i] == -1)
	}
	free(sizes);
	return OK;
}
enum RTN write_output(int size, unsigned char** output_arr, void* out){
	return OK;
}

