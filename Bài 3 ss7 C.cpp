#include <stdio.h>

int main() {
	int songuyen[5]; 
    int sochan = 0;
   	printf ("m?i b?n nh?p vào s? nguyên th? nh?t : ");
	scanf ("%d", &songuyen[1]);
	printf ("m?i b?n nh?p vào s? nguyên th? hai : ");
	scanf ("%d", &songuyen[2]);
	printf ("m?i b?n nh?p vào s? nguyên th? ba : ");
	scanf ("%d", &songuyen[3]);
	printf ("m?i b?n nh?p vào s? nguyên th? bon : ");
	scanf ("%d", &songuyen[4]);
	printf ("m?i b?n nh?p vào s? nguyên th? nam : ");
	scanf ("%d", &songuyen[5]);
    printf("Cac so chan trong mang la: ");

     for (int i = 0; i < 5; i++) {
        if (songuyen[i] % 2 == 0) {
            printf("%d ", songuyen[i]);
            sochan = 1;
            }
      }      
   
   if(sochan==0){
   	printf ("m?ng không ch?a s? ch?n ");
   	}

 
	
    return 0;

}
