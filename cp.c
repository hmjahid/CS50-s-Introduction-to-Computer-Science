#include <stdio.h>
#include <stdint.h>


typedef uint8_t BYTE;

int main( int argc, char *argv[])
{
    
    // Open the source file
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[1], "wb");

    BYTE b;
    
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fread(&b, sizeof(b), 1, dst);
    }

    // Close both files
    fclose(src);
    fclose(dst);

    return 0;
}