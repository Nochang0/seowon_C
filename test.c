/*
* 프로그램 내용 : 10과 프로그래밍 문제 17번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.15
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[21];
    char artist[21];
    char genre[21];
    int duration;
} SONG;

void print_song(const SONG* song) {
	printf("%s  %s   %s   %d초\n", song->title, song->artist, song->genre, song->duration);
}

int main(void) {
	SONG songs[5] = { 
		{"I'm fine", "방탄소년단", "hip-hop", 209},
		{"봄날", "방탄소년단", "hip-hop", 274},
		{"Awake", "방탄소년단", "ballad", 226},
 	   {"별 보러 가자","박보검","ballad" ,316},
	   {"Love Shot","EXO","pop" ,200}
     };
	
	while(1) {
	    char keyword[21];
	    printf("키워드(제목/아티스트)? ");
	    scanf("%s", keyword);
		
	    if(strcmp(keyword,".") == 0)
	        break;
		
	    for(int i=0; i<5; i++) {
	        if(strcmp(songs[i].title,keyword) == 0 || strcmp(songs[i].artist,keyword) == 0) { 
	            print_song(&songs[i]);
	        }
	    }
	    printf("\n");
   }
	return 0;
}




























// clear && gcc test.c -o test.out -lm && ./test.out