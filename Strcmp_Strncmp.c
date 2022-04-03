#include<stdio.h>
#include<string.h>

void main(){
    printf("\"Hello\" & \"Hello\" String: %d\n", strcmp("Hello", "Hello"));
    printf("\"Hella\" & \"Hello\" String: %d\n", strcmp("Hella", "Hello"));
    printf("\"Hello\" & \"Hellx\" String: %d\n", strcmp("Hello", "Hellx"));
}