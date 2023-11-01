#include <stdio.h>
#include <unistd.h>

void LoadSpin(void) {
    int file_size = 1000;
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
    printf("\rEND\n");
}

void LoadBar(void) {
    int bar_length = 30;
    int file_size = 100;
    int download_speed = 10;
    float total_time = (float)file_size / download_speed + 1;

    for (int i = 0; i < (int)total_time; i++) {
        int current_size = i * download_speed;
        float ratio = (float)current_size / file_size;
        int filled_length = (int)(bar_length * ratio);

        char bar[bar_length + 1];
        for (int j = 0; j < filled_length; j++) {
            bar[j] = '█';
        }
        for (int j = filled_length; j < bar_length; j++) {
            bar[j] = ' ';
        }
        bar[bar_length] = '\0';

        float percent = ratio * 100;

        const char* cursor = "|/-\\";
        printf("\r%c %.1f%%|%s|", cursor[i % 4], percent, bar);
        fflush(stdout);
        usleep(100000);
    }
    printf("\nEND\n");
}
