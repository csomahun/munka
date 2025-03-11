#pragma once
#pragma once
#ifndef SMILY_H
#define SMILY_H

// Struct for the smilys
typedef struct {
    char type[3][4];   
} Smily;

Smily initSmilyS(void);

#endif // SMILY_H
