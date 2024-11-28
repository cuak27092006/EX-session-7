#include <stdio.h>

int main() {
    int Mang[5] = {11, 22, 33, 20, 5};
    
    int max = Mang[0];
    int min = Mang[0];
    
  if (Mang[1] > max) {
        max = Mang[1];
    }
  if (Mang[1] < min) {
        min = Mang[1];
    }
  if (Mang[2] > max) {
        max = Mang[2];
    }
  if (Mang[2] < min) {
        min = Mang[2];
    }
  if (Mang[3] > max) {
        max = Mang[3];
    }
  if (Mang[3] < min) {
        min = Mang[3];
    }
  if (Mang[4] > max) {
        max = Mang[4];
    }
  if (Mang[4] < min) {
        min = Mang[4];
    }
  if (Mang[5] > max) {
        max = Mang[5];
    }
  if (Mang[5] < min) {
        min = Mang[5];
    }


    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}

