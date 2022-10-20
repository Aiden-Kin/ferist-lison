#include<stdio.h>

#include<math.h>

int main() {
    int n = 0, a[20];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        int isP = 1;
        if (a[i] >= 4) {
            for (int j = 2; j <= sqrt(a[i]); j++) {
                if (a[i] % j == 0) {
                    isP = 0;
                    break;
                }
            }
        }
        else if (a[i] == 1)
            isP = 0;
        if (isP) {
            a[n] = a[i];
            n++;
        }
    }

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (a[i] > a[j]) {

                int temp = a[i];

                a[i] = a[j];

                a[j] = temp;

            }

        }

    }

    for (int i = 0; i < n; i++)

        printf("%5d", a[i]);

    return 0;

}
