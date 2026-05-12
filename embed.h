/* embed.h */
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>
#include "birchutils/birchutils.h"

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;
typedef unsigned _BitInt(128) int128;

#define $8 (int8 *)
#define $6 (int16)
#define $2 (int32)
#define $4 (int64)
#define $16 (int128)
#define $c (char *)
#define $i (int)

// makes it possible to analyze different formats
enum e_language {
    c =0,
    asm =1
};
typedef enum e_language language;

void printhhdr(int8*, language);
int16 length(int8*);
bool compare(int8*, int8*);
void usage(int8*);
int main(int,char**);