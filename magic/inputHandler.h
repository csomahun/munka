#pragma once
#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//
// str: "AH 8C 10D"
// smaler string : "AH" or "8C" or "10D"
// 
//reads the file and checks if the format of the given string is good
// it is a regular str when
//  - the string is biger than 12 character
//	- the string has a smaler str wich is 1 or more than 3 character long
//  - if there is 2 spaces betwen 2 char

char *myFileReader(char* fileName);

#endif // !INPUTHANDLER_H

