﻿#include <iostream>
using namespace std;

int find(char s[]) {
    int k = 0;
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == '.')
            k++;
        if (k == 3)
            return i;
    }
    return -1;  
}

char* change(char* str) {
    size_t len = strlen(str);

    for (int i = 3; i < len; i += 4)  
        str[i] = '.';
    return str;
}

int main() {
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int third_dot_index = find(str);
    if (third_dot_index != -1)
        cout << "Index of third dot: " << third_dot_index << endl;
    else
        cout << "The string does not contain three dots." << endl;

    char* modified_str = change(str);

    cout << "Modified string (result): " << modified_str << endl;

    return 0;
}
