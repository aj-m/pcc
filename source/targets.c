#include "targets.h"

enum RTN get_target_platform(enum targets* out) {
	out = NULL;
	return INVALID_PLATFORM;
}

enum RTN set_target_platform(enum targets* in) {
	return INVALID_PLATFORM;
}

enum RTN get_host_platform(enum targets* out) {
	return OK;
}

