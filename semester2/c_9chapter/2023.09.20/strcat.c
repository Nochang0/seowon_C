/*
* 프로그램 내용 : 문자열 다루기 5
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.09.20
*/

int main(void) {
	char sentence[100] = "";
	char word[20];
	
	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);
		strcat(sentence, " ");
	} while (strcmp(word,  ".") != 0);
	
	printf("%s\n", sentence);
	
	return 0;
}