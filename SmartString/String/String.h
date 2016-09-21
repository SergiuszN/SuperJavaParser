#ifndef CCLASECOMPILER_STRING_H
#define CCLASECOMPILER_STRING_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct SmartString {

    //variables
    char* row;
    size_t length;

    //functions
    void (*echo) (struct SmartString *);
    void (*setString) (struct SmartString*, const char*);
    size_t (*getLength) (struct SmartString*);
    char (*getChar) (int, struct SmartString*);
    char* (*getString) (struct SmartString*);
    void (*addString) (struct SmartString*, struct SmartString*);
    void (*addChar) (struct SmartString*, char);
    struct SmartString (*substr)(struct SmartString*, int, int);

    //destructor
    void (*destroy)(struct SmartString*);
} SmartString;

SmartString new_SmartString();
SmartString new_SmartStringFromString(const char*);

#endif //CCLASECOMPILER_STRING_H
