#include <stdio.h>

//define functions
int checkCombinations(int score);

int main() {
    while (1) {
    int score;
    printf("Enter the NFL score (Enter 1 to stop):");
    scanf("%d", &score);
    getchar();
    if (score == 1) {
        break;
    }
    if (score > 1) {
        checkCombinations(score);
    }
    }
}

int checkCombinations(int score) {
    for (int td2 = 0; td2 <= score/8; td2++) {
        for (int td1 = 0; td1 <= score/7; td1++) {
            for (int td = 0; td <= score/6; td++) {
                for (int fg = 0; fg <= score/3; fg++) {
                    for (int s = 0; s <= score/2; s++) {
                        if (8*td2 + 7*td1 + 6*td + 3*fg + 2*s == score) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, s);
                        }
                    }
                }
            }
        }
    }
   
}