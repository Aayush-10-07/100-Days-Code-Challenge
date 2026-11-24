#include <stdio.h>

int main() {
    int n, arr[100], freq[1000] = {0};
    int i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            break;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}
