
#include "Test.h"

 MunitResult test_compare(const MunitParameter params[], void* data) {
   

    /* These are just to silence compiler warnings about the parameters
     * being unused. */
    (void)params;
    (void)data;

    /*
    Test1
    " :) "
    TRUE
    */
    bool t1 = test1();
    munit_assert_true(t1);

    /*
    Test2
    " :( "
    TRUE
    */
     
    bool t2 = test2();
    munit_assert_true(t2);
    /*
    Test3
    " :-) "
    TRUE
    */
    bool t3 = test3();
    munit_assert_true(t3);
    /*
    Test4
    " :-( "
    FALSE
    */
    bool t4 = test4();
    munit_assert_false(t4);


    /*
    Test5
    " :-) 10D "
    FALSE
    */
    bool t5 = test5();
    munit_assert_false(t5);
    /*
    Test7
    " 10D  10D "
    FALSE
    */
    bool t7 = test7();
    munit_assert_false(t7);
    /*
   Test8
   " 10D D "
   FALSE
   */
    bool t8 = test8();
    munit_assert_false(t8);
   /*
     Test9
     " 10dD  "
     FALSE
     */
    bool t9 = test9();
    munit_assert_false(t9);
     /*
   Test10
   " 10d "
   FALSE
   */
    bool t10 = test10();
    munit_assert_false(t10);
   /*
  Test11
  " aD "
  FALSE
  */
    bool t11 = test12();
    munit_assert_false(t11);
  /*
Test12
" 10D 10D 10D 10D "
FALSE
*/
    bool t12 = test12();
    munit_assert_false(t12);


    return MUNIT_OK;
}


 bool test1() {
     char str[12];
     strcpy(str, myFileReader("test1.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test2() {
     char str[12];
     strcpy(str, myFileReader("test2.txt"));
     bool res = smarttext_recognize(str);
     return res;

 }
 bool test3() {
     char str[12];
     strcpy(str, myFileReader("test3.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test4() {
     char str[12];
     strcpy(str, myFileReader("test4.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test5() {
     char str[12];
     strcpy(str, myFileReader("test5.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test7() {
     char str[12];
     strcpy(str, myFileReader("test7.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test8() {
     char str[12];
     strcpy(str, myFileReader("test8.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test9() {
     char str[12];
     strcpy(str, myFileReader("test9.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test10() {
     char str[12];
     strcpy(str, myFileReader("test10.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test11() {
     char str[12];
     strcpy(str, myFileReader("test11.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
 bool test12() {
     char str[12];
     strcpy(str, myFileReader("test12.txt"));
     bool res = smarttext_recognize(str);
     return res;
 }
