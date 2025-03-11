#pragma once
#ifndef STRHANDLER_H
#define STRHANDLER_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

// str: "AH 8C 10D"
// smaler string : "AH" or "8C" or "10D"
//seprate the whole str to smaleler str
char* strSeparater(char* str,int iter);

//checks if the smaler str is a valid card or smiley
bool isTrue(char* str, char* text);

// the requered funtion
bool smarttext_recognize(char* text);

#endif // !STRHANDLER_H

