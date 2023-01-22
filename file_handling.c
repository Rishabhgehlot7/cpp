#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr = fopen("file.txt", "r");
    char string[10];
    //    fputc('4',ptr);
    //    fputs("rishabh is good boy",ptr);
    char c = getc(ptr);
    printf("%c", c);
    fgets(string, 10, ptr);
    printf("%s",string);
    

    return 0;
}