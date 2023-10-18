#include <stdio.h>    // 입출력 관련 함수를 사용하기 위한 헤더 파일
#include <stdlib.h>   // 일반적인 유틸리티 함수와 동적 메모리 할당을 위한 헤더 파일
#include <string.h>   // 문자열 처리를 위한 헤더 파일
#include <time.h>

int main(void) {
    unsigned char buff[BUFSIZ];
    char in_file[128] = "";
    char out_file[128] = "backup";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int cnt_read = 0;

    printf("복사할 파일 이름? ");
    gets_s(in_file, sizeof(in_file));
    strcat(out_file, strchr(in_file, '.'));
    fin = fopen(in_file, "rb");
    if (fin == NULL) goto cleanup;
    fout = fopen(out_file, "wb");

    if (fout == NULL) goto cleanup;
    while ((cnt_read = fread(buff, 1, sizeof(buff), fin)) > 0) {
        int cnt_written = fwrite(buff, 1, cnt_read, fout);
        if (cnt_written < cnt_read) goto cleanup;
    }
cleanup:
    if (fin == NULL || fout == NULL)
        printf("\n");
    else if (ferror(fin))
        printf("파일 읽기 실패\n");
    else if (ferror(fout))
        else printf("파일 쓰기 실패\n");
    printf(" ");
    if (fin) fclose(fin);
    if (fout) fclose(fout);
    return 0;
}