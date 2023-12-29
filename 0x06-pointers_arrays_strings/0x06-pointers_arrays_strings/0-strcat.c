char *_strcat(char *dest, char *src) {
   char *dest_end = dest;  // Pointer to keep track of the end of the destination string

   // Find the end of the destination string (null terminator)
   while (*dest_end != '\0') {
       dest_end++;
   }

   // Copy the source string to the end of the destination string
   while (*src != '\0') {
       *dest_end++ = *src++;
   }

   // Add the null terminator to the new end of the destination string
   *dest_end = '\0';

   return dest;  // Return the pointer to the concatenated string
}

