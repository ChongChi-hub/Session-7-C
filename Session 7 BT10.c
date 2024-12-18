#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Cac so nguyen to co trong mang la: ");
    for (int i = 0; i < n; i++) {
        int flag = 1;
        if (array[i] < 2) {
            flag = 0;
        }

        for (int j = 2; j <= sqrt(array[i]); j++) {
            if (array[i] % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            printf("%d ", array[i]);
        }
    }

    return 0;
}
