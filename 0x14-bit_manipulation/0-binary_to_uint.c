#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    size_t len = strlen(b);

    /* Check for NULL pointer */
    if (b == NULL) {
        return 0;
    }

    /* Iterate over the string and calculate the result */
    int i;
    for (i = 0; i < len; i++) {
        if (b[i] == '0') {
            result += 0;
        } else if (b[i] == '1') {
            result += pow(2, len - 1 - i);
        } else {
            /* Invalid character in string */
            return 0;
        }
    }

    return result;
}
