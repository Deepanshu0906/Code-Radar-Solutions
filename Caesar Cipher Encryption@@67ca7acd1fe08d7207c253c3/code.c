// Your code here...
int caesarCipher(char message[100],int shift,char encrypted[100]){
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A'; // Uppercase shift
        } else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a'; // Lowercase shift
        }
    }
}