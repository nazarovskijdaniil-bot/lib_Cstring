#include <iostream>
#include <cstdio> // для printf
#include "string_lib.h" // моя либа
using namespace std;



void test_strlen() {
    cout << " input:\n > ";
    char string[200];
    cin.getline(string, 200);
    cout << " size:\n > " << my_strlen(string);
}

void test_strcpy() {
    char str1[] = "Sample string";
    char str2[40];
    char str3[40];
    my_strcpy(str2, str1);
    my_strcpy(str3, "copy successful");
    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3); // взял из документации поигрался и оставил 
}

void test_strncopy() {
    char str1[] = "To be or not to be";
    char str2[40];
    char str3[40];
    cout << "str1: " << str1 << "\nstr2: " << my_strncopy(str2, str1, my_strlen(str2)) << "\nstr3: " << my_strncopy(str3, str2, 5) << "\n";
}

void test_strcat() {
    char str[80];
    my_strcpy(str, "these ");
    my_strcat(str, "strings ");
    my_strcat(str, "are ");
    my_strcat(str, "concatenated.");
    cout << str << endl;
}

void test_strncat() {
    char str1[20];
    char str2[20];
    my_strcpy(str1, "To be ");
    my_strcpy(str2, "or not to be");
    my_strncat(str1, str2, 4);
    cout << str1;
}



int main()
{
    return 0;
}
