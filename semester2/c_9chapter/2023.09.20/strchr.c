/*
* 프로그램 내용 : 문자열의 검색
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.20
*/


int main(void){
	char filename[] = "readme.txt";
	char *p = NULL;
	
	p = strchr(filename, ".");
	if (p != NULL)
		printf("file extension: %s\n", p + 1);
	
	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");
	
	return 0;
}