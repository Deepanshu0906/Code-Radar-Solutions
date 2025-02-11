// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char cha;
    scanf("%c",&cha);
    if(cha=="a"||cha=="e"||cha=="i"||cha=="o"||cha=="u"){
        printf("vowel");
    }else if(a<cha<=z){
        printf("Consonant");
    }else if(isdigit(cha)){
        printf("Digit")
    }else{
        printf("Special Character");
    }
}