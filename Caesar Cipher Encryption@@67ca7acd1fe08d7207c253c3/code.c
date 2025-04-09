int caesarCipher(char message[], int shift, char encrypted[]) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A'; // Uppercase shift
        } else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a'; // Lowercase shift
        } else {
            encrypted[i] = ch; // Keep spaces & special characters unchanged
        }
    }

    encrypted[i] = '\0'; // Terminate encrypted string properly
    return 0;
}