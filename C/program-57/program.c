#include <stdio.h>

int main () {
    float score;
    printf("Enter your total score (0-100): ");
    scanf("%f",&score);
    if(score < 0 || score > 100) {
        printf("Enter score 0 - 100 \n");
    } else if(score >= 80) {
        printf("Score = %.2f , You Grade : A\n",score);
    } else if(score >= 75) {
        printf("Score = %.2f , You Grade : B+\n",score);
    } else if(score >= 70) {
        printf("Score = %.2f , You Grade : B\n",score);
    } else if(score >= 65) {
        printf("Score = %.2f , You Grade : C+\n",score);
    } else if(score >= 60) {
        printf("Score = %.2f , You Grade : C\n",score);
    } else if(score >= 55) {
       printf("Score = %.2f , You Grade : D+\n",score);
    } else if(score >= 50) {
        printf("Score = %.2f , You Grade : D\n",score);
    }  else {
        printf("Score = %.2f , You Grade : F\n",score);
    }
}