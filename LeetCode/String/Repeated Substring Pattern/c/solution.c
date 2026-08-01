bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    char copy[2 * n + 1]; // Memory for copying the string twice
    strcpy(copy, s); // Copy the string
    strcat(copy, s); // Concatenate the string (Twice the string)
    copy[2 * n - 1] = '\0'; // Remove the last character

    return strstr(copy + 1, s); // (copy+1)Removes the first char and check's whether It is a substring - using strstr function
}