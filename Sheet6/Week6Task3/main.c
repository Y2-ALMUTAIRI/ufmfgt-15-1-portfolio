/*
 Filename: Week6Task3.c
 Author: Youssef Al Mutairi
 Date: 23/04/2026
*/
#include <stdio.h>
void split_time(long total_sec, int *hr, int *min, int *sec) {
 *hr = total_sec / 3600;
 long remaining_seconds = total_sec % 3600;
 *min = remaining_seconds / 60;
 *sec = remaining_seconds % 60;
}
int main() {
 int hours, minutes, seconds;
 long total;
 // Test case 1
 total = 3661;
 split_time(total, &hours, &minutes, &seconds);
 printf("Total seconds: %ld -> Time: %02d:%02d:%02d\n", total, hours, minutes, seconds);
 // Test case 2
 total = 86399;
 split_time(total, &hours, &minutes, &seconds);
 printf("Total seconds: %ld -> Time: %02d:%02d:%02d\n", total, hours, minutes, seconds);
 // Test case 3
 total = 0;
 split_time(total, &hours, &minutes, &seconds);
 printf("Total seconds: %ld -> Time: %02d:%02d:%02d\n", total, hours, minutes, seconds);
 return 0;
}

