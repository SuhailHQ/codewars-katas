#include <stdio.h>
char *remove_char(char *dst, const char *src) {
    const char *s = src;
    char *d = dst;
    while (*s != '\0')
    {
        s++;
    }
    s--;
    src++;
    while (src < s)
    {
        *d = *src;
        src++;
        d++;
    }
    *d = '\0';
    return dst;
    
}
int main(){
    char src[] = "person";
    char dst[10];
    remove_char(dst, src);
    printf("%s", dst);

}