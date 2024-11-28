#include <stdio.h>

int main() {
    int Mang[5] = {1, 6, 8, 2, 5};

    printf("Mang luc dau: ");
    printf("%d %d %d %d %d ", Mang[1], Mang[2], Mang[3], Mang[4], Mang[5]);

    if (Mang[1] % 2 == 0) {
        Mang[1] += 3;  
    } else {
        Mang[1] += 2;  
    }
    if (Mang[2] % 2 == 0) {
            Mang[2] += 3;  
    } else {
            Mang[2] += 2;  
    }
    if (Mang[3] % 2 == 0) {
            Mang[3] += 3;  
    } else {
            Mang[3] += 2;  
    }
    if (Mang[4] % 2 == 0) {
            Mang[4] += 3;  
    } else {
            Mang[4] += 2;  
    }
    if (Mang[5] % 2 == 0) {
            Mang[5] += 3;  
    } else {
            Mang[5] += 2;  
    }

    printf("\nMang sau khi thay doi: ");
    printf("%d %d %d %d %d", Mang[1], Mang[2], Mang[3], Mang[4], Mang[5]);

    return 0;
}

