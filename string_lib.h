#ifndef STRING_LIB_H // защита от нескольких включений
#define STRING_LIB_H // для защиты от нескольких включений

#include <stdexcept>
using namespace std;


inline int my_strlen(char string[]) {
    try {
        if (string == nullptr) {
            throw invalid_argument("my_strlen: string pointer is null");
        }
        int size = 0;
        while (string[size] != '\0') ++size;
        return size;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return -1;
    }
    catch (const exception& e) {
        cerr << "Unexpected error in my_strlen: " << e.what() << endl;
        return -1;
    }
}

inline char* my_strcpy(char dest[], const char src[]) {
    try {
        if (dest == nullptr) {
            throw invalid_argument("my_strcpy: dest pointer is null");
        }
        if (src == nullptr) {
            throw invalid_argument("my_strcpy: src pointer is null");
        }
        int size = 0;
        while (src[size] != '\0') {
            dest[size] = src[size];
            ++size;
        }
        dest[size] = '\0';
        return dest;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return nullptr;
    }
    catch (const exception& e) {
        cerr << "Unexpected error in my_strcpy: " << e.what() << endl;
        return nullptr;
    }
}

inline char* my_strncopy(char dest[], const char src[], int size){
    try {
        if (dest == nullptr) {
            throw invalid_argument("my_strncopy: dest pointer is null");
        }
        if (src == nullptr) {
            throw invalid_argument("my_strncopy: src pointer is null");
        }
        if (size < 0) {
            throw invalid_argument("my_strncopy: size cannot be negative");
        }
        int i = 0;
        while (i < size && src[i] != '\0') {
            dest[i] = src[i];
            ++i;
        }
        dest[i] = '\0';
        return dest;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return nullptr;
    }
    catch (const exception& e) {
        cerr << "Unexpected error in my_strncopy: " << e.what() << endl;
        return nullptr;
    }
}

inline char* my_strcat(char dest[], const char src[]) {
    try {
        if (dest == nullptr) {
            throw invalid_argument("my_strcat: dest pointer is null");
        }
        if (src == nullptr) {
            throw invalid_argument("my_strcat: src pointer is null");
        }
        int i = 0;
        while (dest[i] != '\0') ++i;
        int j = 0;
        while (src[j] != '\0') {
            dest[i] = src[j];
            ++i;
            ++j;
        }
        dest[i] = '\0';
        return dest;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return nullptr;
    }
    catch (const exception& e) {
        cerr << "Unexpected error in my_strcat: " << e.what() << endl;
        return nullptr;
    }
}

inline char* my_strncat(char dest[], const char src[], int size) {
    try {
        if (dest == nullptr) {
            throw invalid_argument("my_strncat: dest pointer is null");
        }
        if (src == nullptr) {
            throw invalid_argument("my_strncat: src pointer is null");
        }
        if (size < 0) {
            throw invalid_argument("my_strncat: size cannot be negative");
        }
        int i = 0;
        while (dest[i] != '\0') ++i;
        int j = 0;
        while (src[j] != '\0' && j < size) {
            dest[i] = src[j];
            ++i;
            ++j;
        }
        dest[i] = '\0';
        return dest;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return nullptr;
    }
    catch (const exception& e) {
        cerr << "Unexpected error in my_strncat: " << e.what() << endl;
        return nullptr;
    }
}

#endif // закрытие защиты от нескольких включений
