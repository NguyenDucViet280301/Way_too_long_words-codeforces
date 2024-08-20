#include <stdio.h>

int main()
{

    char chain[100]; // độ dài cuả chuỗi
    int leght = 0;   // Biến đếm độ dài chuỗi
    char firstChar, lastChar;

    printf("nhap chuoi:");
    fgets(chain, sizeof(chain), stdin);

    chain[strlen(chain) - 1] = '\0'; // loai bo \n ở cuối chuỗi

    firstChar = chain[0];
    lastChar = chain[strlen(chain) - 1];

    for (int i = 0; chain[i] != '\0'; i++)
    {
        if (chain[i] != ' ')
            
        leght++;
    }
    printf("%c%02d%c", firstChar, leght, lastChar);
    return 0;
}