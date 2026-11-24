#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = toupper(str[0]);
    }

    printf("%s", str);

    return 0;
}
