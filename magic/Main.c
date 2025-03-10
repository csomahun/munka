#define _CRT_SECURE_NO_WARNINGS
#include "additional.h"
#include "inputHandler.h"
#include "strHandler.h"


int main() {

    char str[12];
    strcpy(str,myFileReader("test5.txt"));
    bool res = smarttext_recognize(str);
    
    printf("%d", res);

    return 0;
}
