#include <stdio.h>
#include <ctype.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(isupper(alpha)){
        printf("Uppercase");
    }
    else if(islower(alpha)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}