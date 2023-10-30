#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>


// 콜백 함수: 영상 데이터 파일 저장
size_t saveMedia(void* ptr, size_t size, size_t nmemb, void* userdata) {
    // 수신된 데이터 처리 (여기서는 단순히 stdout에 출력)
    fwrite(ptr, size, nmemb, stdout);
    return size * nmemb;
}


// NodeJS YouTube API Request
int ytdl(char* url) {
    CURL* curl;																				
    CURLcode res;

    curl_global_init(CURL_GLOBAL_DEFAULT);															// HTTP 요청 전 세팅 1 (libcurl 초기화)
    curl = curl_easy_init();																		// HTTP 요청 전 세팅 2 (libcurl 핸들 생성)
    
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, *url); 													// HTTP 요청 URL 설정
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, saveMedia);									// 영상 데이터 처리 함수 콜백 설정

        res = curl_easy_perform(curl); 																// HTTP 요청 보내기
        
        if (res != CURLE_OK) {
            fprintf(stderr, "서버 오류입니다. 다시 시도해주세요. %s\n", curl_easy_strerror(res));    	  // HTTP 요청 오류 처리 (500) : API 과부하
            
            curl_easy_cleanup(curl);																// 리소스 정리 및 종료 1 (메모리)
            curl_global_cleanup();																	// 리소스 정리 및 종료 2 (스레드 동기화)
            return 500;
        }
        
        curl_easy_cleanup(curl);																	// 리소스 정리 및 종료 1 (메모리)
        curl_global_cleanup();																		// 리소스 정리 및 종료 2 (스레드 동기화)
        return 200;
    } else {
        fprintf(stderr, "정상적인 URL 주소인지 확인 후 다시 시도해주세요.\n");								// HTTP 요청 오류 처리 (400) : URL 재확인 요구
        
        curl_easy_cleanup(curl);																	// 리소스 정리 및 종료 1 (메모리)
        curl_global_cleanup();																		// 리소스 정리 및 종료 2 (스레드 동기화)
        return 400; 
    }
}
