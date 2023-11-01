#include <stdio.h>
#include <unistd.h>

int main(void) {
    int file_size = 100;
    int download_speed = 10;
    float total_time = (float)file_size / download_speed + 1;

    for (int i = 0; i < (int)total_time; i++) {
        int current_size = i * download_speed;
        float ratio = (float)current_size / file_size;
        float percent = ratio * 100;

        const char* cursor = "|/-\\";
        printf("\r%c %.1f%%", cursor[i % 4], percent);
        fflush(stdout);
        usleep(100000);
    }

    printf("\nEND\n");

    return 0;
}
