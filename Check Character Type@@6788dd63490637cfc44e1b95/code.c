#include <stdio.h>
#include <ctype.h>

int main(){
    char cha;
    scanf("%c",&cha);
    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u' || cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U'){ 
        printf("Vowel");
    }else if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z')){
        printf("Consonant");
    }else if(isdigit(cha)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}
