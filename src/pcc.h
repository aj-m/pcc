#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include "keywords.h"
#include "lexer.h"
#include "status.h"

int file_size(const char* path){
	struct stat st;
	if(stat(path, &st) == 0)
		return st.st_size;
	return -1;
}
enum RTN load_sources(int size, char** sources_arr, FILE** out);
enum RTN write_output(int size, unsigned char** output_arr, void* out);
