#include <stdio.h>
#include <math.h>
#define MAX_N 3000

int main() {
    int n;
    int seq [MAX_N];

    while (scanf("%d", &n) == 1) {

        for (int i = 0; i < n; i++) {
            scanf("%d", &seq[i]);
        }


        int pres [MAX_N] = {0};
        int isJolly = 1;

        for (int i = 1; i < n; i++) {
            int diff = abs(seq [i] - seq [i - 1]);

            if (diff >= 1 && diff <= n - 1 && !pres [diff]) {
                pres [diff] = 1;
            } else {
                isJolly = 0;
                break;
            }
        }

        if (isJolly) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }

    return 0;}
