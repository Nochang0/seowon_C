// ./lib/crypto.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// 문자를 URL 인코딩하는 함수
char* encodeURI(const char* str) {
    const char* hex = "0123456789ABCDEF";
    size_t len = strlen(str);
    char* encoded = (char*)malloc(len * 3 + 1); // 인코딩된 문자열을 저장할 버퍼

    size_t pos = 0;
    for (size_t i = 0; i < len; ++i) {
        unsigned char ch = str[i];

        if (isalnum(ch) || ch == '-' || ch == '_' || ch == '.' || ch == '~') {
            encoded[pos++] = ch;
        } else if (ch == ' ') {
            encoded[pos++] = '+';
        } else {
            encoded[pos++] = '%';
            encoded[pos++] = hex[ch >> 4];
            encoded[pos++] = hex[ch & 15];
        }
    }
    encoded[pos] = '\0'; // 문자열 종료
    return encoded;
}

/*
int main() {
    const char* inputStr = "Hello World!";

    char* urlEncodedStr = c_encodeURI(inputStr);

   printf("Original String: %s\n", inputStr);
   printf("URL Encoded String: %s\n", urlEncodedStr);

   free(urlEncodedStr); // 동적 할당된 메모리 해제

   return 0;
}
*/