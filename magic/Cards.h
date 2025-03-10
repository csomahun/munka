#pragma once
#ifndef CARDS_H
#define CARDS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
// struct of the cards and colors
typedef struct {
    char cards[12];   
    char color[4];    
} Cards;

Cards initCardsS(void);

#endif // CARDS_H
