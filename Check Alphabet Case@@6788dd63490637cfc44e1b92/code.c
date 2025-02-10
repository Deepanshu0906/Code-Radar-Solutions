#include <stdio.h>
#include <ctype.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(isupper(alpha)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}