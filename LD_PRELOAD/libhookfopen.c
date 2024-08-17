#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

FILE *(*origin_fopen)(const char *__restrict __filename, const char *__restrict __modes);

FILE *fopen(const char *__filename, const char *__modes)
{
    if (origin_fopen == NULL)
        origin_fopen = dlsym(RTLD_NEXT, "fopen");

    return origin_fopen("B.txt", __modes);
}