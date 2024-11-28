#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    
    int dodaimang = sizeof(mang) / sizeof(mang[0]);

    for (int i = 0; i < dodaimang; i++) {
        printf("Phan tu thu %d : %d\n", i, mang[i]);
    }

    printf("Do dai cua mang la: %d\n", dodaimang);

    return 0;
}
