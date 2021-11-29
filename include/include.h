#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef ASM_H
#define ASM_H

size_t _my_strlen(char*);
int _my_strncmp(char*,char*,int);
int _my_strcmp(char*,char*);
int _my_strcasecmp(char*,char*);
char *_my_strchr(char*,char);

#endif

#define BUFFER 1000


