#include <stdio.h>

int main()
{
    int n;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    int array[n], check;
    
    
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ",i + 1 );
        scanf("%d", &check);
    while(check % 2 == 0){
        printf("So nhap khong hop le vui long nhap so le!!!\n");
        printf("Nhap phan tu thu %d: ",i + 1);
        scanf("%d", &check);
    }
    array[i] = check;
    }
        printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

