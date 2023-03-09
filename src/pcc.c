//    pcc - A free PowerBASIC compiler
//    Copyright (C) 2017 Andrew Montenigro 

//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>

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
		sizes[i] = file_size(sources_arr[i]);
		if(!exists && (sizes[i] != -1)) exists = 1;
	}
	for(int i = 0; i < size; i++){
		if(sizes[i] == -1) continue;
	}
	free(sizes);
	return OK;
}
enum RTN write_output(int size, unsigned char** output_arr, void* out){
	return OK;
}

