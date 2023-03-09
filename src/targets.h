#pragma once
#include "status.h"

enum targets {
	X86_WIN32,
	X86_WIN64,
	I686,
	X86_64,
	OTHER
};

enum RTN get_target_platform(enum targets*);
enum RTN set_target_platform(enum targets*);
enum RTN get_host_platform(enum targets*);
