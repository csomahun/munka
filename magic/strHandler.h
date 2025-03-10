#pragma once
#ifndef STRHANDLER_H
#define STRHANDLER_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


// str: "AH 8C 10D"
// smaler string : "AH" or "8C" or "10D"
//seprate the whole str to smaleler str
char* strSeparater(char* str,int iter);

// the requered funtion
bool smarttext_recognize(char* text);

#endif // !STRHANDLER_H

