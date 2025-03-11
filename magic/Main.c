#define _CRT_SECURE_NO_WARNINGS
#include "inputHandler.h"
#include "strHandler.h"

int main() {

    char str[12];
    strcpy(str,myFileReader("test1.txt"));
    bool res = smarttext_recognize(str);
    

    return 0;
}
