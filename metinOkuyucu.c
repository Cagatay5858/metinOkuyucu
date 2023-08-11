#include <stdio.h>

void HarfVeRakamSay(FILE *dosya) {
    char c;
    int bHarf = 0, kHarf = 0, rakam = 0, bosluk = 0;

    dosya = fopen("document.txt", "r");
    if (dosya == NULL) {
        printf("Dosya bos");
    } else {
        while ((c = fgetc(dosya)) != EOF){
            if (c >= 'A' && c <= 'Z') {
                bHarf++;
            } else if (c >= 'a' && c <= 'z') {
                kHarf++;
            } else if (c >= '0' && c <= '9') {
                rakam++;
            } else if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') {
                bosluk++;
            }
        }
        printf("Bu dosyada %d tane buyuk harf %d tane kucuk harf %d tane rakam ve %d tane bosluk bulunmakta", bHarf, kHarf, rakam, bosluk);
    }
}

int main() {
    FILE *deneme;
    deneme = fopen("document", "r");
    HarfVeRakamSay(deneme);
    fclose(deneme);
    return 0;
}