/*
* 프로그램 내용 : 9과 프로그래밍 문제 17번
* 개발자 : 연승현
* 학번 : 202311420
* 실습일 : 2023.10.1
*/

#include <stdio.h>
#include <string.h>

void printMenu() {
    printf("[ 0.종료 1.추가 2.수정 3.목록 ] 선택? ");
}

void addSong(char songs[][40], int *count) {
    if (*count >= 20) {
        printf("더 이상 노래를 추가할 수 없습니다.\n");
        return;
    }
    
    char title[40];
    
    printf("노래 제목? ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    
    strcpy(songs[*count], title); 
    (*count)++;
}

void modifySong(char songs[][40], int count) {
    char searchTitle[40];
    
    printf("찾을 노래 제목? ");
    fgets(searchTitle, sizeof(searchTitle), stdin);
     searchTitle[strcspn(searchTitle, "\n")] = '\0';
     
     for (int i = 0; i < count; i++) {
         if (strcmp(songs[i], searchTitle) == 0) {
             char newTitle[40];
             
             printf("수정할 제목? ");
             fgets(newTitle, sizeof(newTitle), stdin);
             newTitle[strcspn(newTitle, "\n")] = '\0';
             
             strcpy(songs[i], newTitle);
             return;
         }
     }
     printf("해당하는 노래를 찾을 수 없습니다.\n");
}

void printSongs(char songs[][40], int count) {
   if (count == 0) {
       printf("노래 목록이 비어 있습니다.\n");
       return;
   }
   
   printf("<< 노래 목록 >>\n");
   
   for (int i = 0; i < count; i++) {
       printf("%s\n", songs[i]);
   }
}

int main(void) {
   char songs[20][40]; 
   
   int choice;
   int songCount = 0;

   do {
       printMenu();
       
       char input[10];
       fgets(input, sizeof(input), stdin);
       sscanf(input, "%d", &choice);

       switch(choice) { 
           case 1:
               addSong(songs, &songCount);
               break;
           case 2:
               modifySong(songs, songCount);
               break;
           case 3:
               printSongs(songs, songCount);
               break;
           default:
               break;
       }

      } while(choice != 0);

      return(0); 
}



















// clear && gcc test.c -o test.out -lm && ./test.out