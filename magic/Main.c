#define _CRT_SECURE_NO_WARNINGS
#include "inputHandler.h"
#include "strHandler.h"
#include "Test.h"

int main() {
    
    char str[12];
    strcpy(str,myFileReader("input.txt"));
    bool res = smarttext_recognize(str);
    printf("%d", res);

   

    //contains 11 tests
    //TESTING
   /*     
   MunitParameter params[] = { {NULL, NULL} }; // Ha nincsenek paraméterek
    MunitResult result = test_compare(params, NULL);

    if (result == MUNIT_OK) {
        printf("Test passed!\n");
    } else {
        printf("Test failed!\n");
    }
    */

    
    return 0;
}
