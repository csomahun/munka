#pragma once
#pragma once
#ifndef SMILY_H
#define SMILY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// Struct for the smilys
typedef struct {
    char type[3][4];   
} Smily;

Smily initSmilyS(void);

#endif // SMILY_H
