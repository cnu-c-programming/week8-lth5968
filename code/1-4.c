#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    while (*a != '\0' && *b != '\0') {
        if (*a != *b) {
            return (int)(*a - *b);
        }
        a++;
        b++;
    }
    return (int)(*a - *b);
}

int main() {
    printf("%d\n", my_strcmp("abc", "abd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
    return 0;
}
