#include <stdio.h>

int is_heshu(int num);

int main() {
    int n = 0;
    scanf("%d", &n);
    int min = 1;

    for (int a = 1; a < n; a++) {
        min *= 10;
    }
    int max = min * 10;

    for (int i = min; i < max; i++) {
        int figure = i;
        int flag = 1; 
        while (figure > 0) {
            if (!is_heshu(figure)) {
                flag = 0; 
            }
            figure /= 10;
        }
        if (flag) {
            printf("%d ",i);
			}
    }
    return 0;
}

int is_heshu(int num) {
    if (num <= 1) return 0;
    for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return 1;
        }
    }
    return 0;
}
