#include "StringTests.h";
#include "../SmartString.h";

void testSmartStringFramework() {
    test_new_SmartString();
    test_new_SmartStringFromString();
    test_setString();
    test_getLength();
    test_getChar();
    test_getString();
    test_addString();
    test_addChar();
    test_copy();
    test_equal();
}

void test_new_SmartString() {
    printf("* Test new_SmartString()...\n");
    struct SmartString string = new_SmartString();

    if (strlen(string.row) == 0 && string.length == 0) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_new_SmartStringFromString() {
    printf("* Test new_SmartStringFromString()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");

    if (strcmp(string.row, "It`s a simple test!") == 0 && string.length == strlen("It`s a simple test!")) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_setString() {
    printf("* Test setString()...\n");
    struct SmartString string = new_SmartString();
    string.setString(&string, "It`s a simple test!");

    if (strcmp(string.row, "It`s a simple test!") == 0 && string.length == strlen("It`s a simple test!")) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}


void test_getLength() {
    printf("* Test getLength()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");

    if (string.getLength(&string) == strlen("It`s a simple test!")) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_getChar() {
    printf("* Test getChar()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");

    if (string.getChar(0, &string) != '\0' && string.getChar(string.length, &string) == '\0') {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_getString() {
    printf("* Test getString()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");

    if (strcmp(string.getString(&string),"It`s a simple test!") == 0) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_addString() {
    printf("* Test addString()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");
    struct SmartString addString = new_SmartStringFromString("Add String");

    string.addString(&string, &addString);

    if (strcmp(string.getString(&string),"It`s a simple test!Add String") == 0 && string.length == strlen("It`s a simple test!Add String")) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
    addString.destroy(&addString);
}

void test_addChar() {
    printf("* Test addChar()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");
    char space = ' ';

    string.addChar(&string, space);

    if (strcmp(string.getString(&string),"It`s a simple test! ") == 0 && string.length == strlen("It`s a simple test! ")) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
}

void test_copy() {
    printf("* Test copy()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");
    struct SmartString copyString = string.copy(&string);

    if (strcmp(string.row, copyString.row) == 0 && string.length == copyString.length) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
    copyString.destroy(&copyString);
}

void test_equal() {
    printf("* Test equal()...\n");
    struct SmartString string = new_SmartStringFromString("It`s a simple test!");
    struct SmartString copyString = new_SmartStringFromString("It`s a simple test!");

    if (string.equal(&string, &copyString)) {
        printf("    Ok\n");
    } else {
        printf("    Error\n");
    }

    string.destroy(&string);
    copyString.destroy(&copyString);
}