#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "keyword.h"
#include "lexer.h"
#include "status.h"

enum RTN load_sources(int size, char** sources_arr, FILE* out);
enum RTN write_output(int size, unsigned char** output_arr, void* out);
