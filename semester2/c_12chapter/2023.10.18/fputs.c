/*
* 프로그램 내용 : 파일의 내용을 콘솔로 출력하기
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.18
*/

int main(void) {
	FILE *fp = NULL;
	char str[BUFSIZ];
	fp = fopen("readline.c", "r");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	while (fgets(str, sizeof(str), fp) != NULL) {
		fputs(str, stdout);
	}
	
	fclose(fp);
	return 0;
}