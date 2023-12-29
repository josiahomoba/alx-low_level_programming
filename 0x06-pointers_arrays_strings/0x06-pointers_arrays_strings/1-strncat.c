
char *_strncat(char *dest, char *src, int n) {
    char *dest_end = dest;

    // Find the end of dest using a for loop
    for (; *dest_end != '\0'; dest_end++) {
        // Loop until null terminator is found
    }

    // Copy n characters from src to dest using a for loop
    for (; *src != '\0' && n > 0; dest_end++, src++, n--) {
        *dest_end = *src;
    }

    // Add the null terminator to the end of dest
    *dest_end = '\0';

    return dest;
}
