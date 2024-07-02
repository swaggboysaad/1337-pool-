#include <stdio.h>
#include <stdio.h>

int ft_str_is_printable(char *str) {
    int i;
    i = 0;
    while (str[i]) {
        if (str[i] >= 32 && str[i] <= 126) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[] = "Hello, World!"; // Printable string
    char str2[] = "\n"; // Non-printable string
    char str3[] = ""; // Empty string
    char str4[] = "Hello\nWorld"; // Mixed string

    printf("Test 1: %i\n", ft_str_is_printable(str1)); // Expected output: 1
    printf("Test 2: %i\n", ft_str_is_printable(str2)); // Expected output: 0
    printf("Test 3: %i\n", ft_str_is_printable(str3)); // Expected output: 1
    printf("Test 4: %i\n", ft_str_is_printable(str4)); // Expected output: 0

    return 0;
}

