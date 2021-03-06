#ifndef CCLASECOMPILER_STRINGTESTS_H
#define CCLASECOMPILER_STRINGTESTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// -----------------------------
// test for SmartStringFramework
// -----------------------------
void testSmartStringFramework();
// ---- test SmartString
void test_SmartString();
void test_new_SmartString();
void test_new_SmartStringFromString();
void test_setString();
void test_getLength();
void test_getChar();
void test_getString();
void test_addString();
void test_addChar();
void test_copy();
void test_equal();
void test_subStr();
void test_strPos();
void test_allTrim();
void test_strRPos();
void test_trim();
void test_strReplace();
void test_getBlock();
void test_deleteAllBetween();
// ---- test SmartStringArray
void test_SmartStringArray();
void test_add();
void test_get();
void test_find();

#endif //CCLASECOMPILER_STRINGTESTS_H
