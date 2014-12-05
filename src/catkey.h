#ifndef __CATKEY_H__
#define __CATKEY_H__

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct catkey {
	size_t count;
} catkey;

enum CATKEY_ARG_T {
	CATKEY_T_NONE,
	CATKEY_T_BOOL,
	CATKEY_T_STR,
	CATKEY_T_INUM,
	CATKEY_T_LNUM,
	CATKEY_T_FNUM,
	CATKEY_T_DNUM,
	CATKEY_T_LIST,
	CATKEY_T_ELIST
};

typedef struct catkey_arg {
	const char *short_form;
	const char *full_form;
	union {
		int bool;
		const char *str;
		int inum;
		long long lnum;
		float fnum;
		double dnum;
	} value;
	int type;
	void (*callback)(struct catkey_arg *arg, void *extra);
	void *extra;
} catkey_arg;

#endif
