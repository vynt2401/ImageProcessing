#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
    int width = 512, height = 512;
    FILE *fin, *fgray, *fbin;
    unsigned char *rgb, *gray, *bin;

    //malloc bo nho dong
    rgb = malloc(3 * width * height);
    gray = malloc(width * height);
    bin = malloc(width * height);

    fin = fopen("./raw.dat", "rb");
    if (!fin) {
        perror("Không mở được raw.dat");
        return 1;
    }

    //read FILE
    size_t read_count = fread(rgb, 1, 3 * width * height, fin);
    fclose(fin);
    printf("Đọc được %zu bytes\n", read_count);

    if (read_count != 3 * width * height) {
        fprintf(stderr, "Kích thước file không khớp!\n");
        return 1;
    }   

    //pixel xu ly
    for (int i = 0; i < width * height; i++)
    {
        unsigned char R = rgb[3*i];
        unsigned char G = rgb[3*i + 1];
        unsigned char B = rgb[3*i + 2];

        unsigned char g = (unsigned char)(0.299*R + 0.587*G + 0.114*B);
        gray[i] = g;
        bin[i]  = (g >= 128) ? 255 : 0;
    }

    //write FILE
    fgray = fopen("gray.dat", "wb");
    fwrite(gray, 1, width * height, fgray);
    fclose(fgray);

    fbin = fopen("bin.dat", "wb");
    fwrite(bin, 1, width * height, fbin);
    fclose(fbin);

    //giai phong bo nho
    free(rgb);
    free(gray);
    free(bin);

    return 0;
}
