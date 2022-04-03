// c program to arrange the string in alphabetical order
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Parameter(s) is not correct");
        return -1;
    }
    char val, string[strlen(argv[1])+1];

    strcpy(string, argv[1]);

    for(int i = 0; i < strlen(string); i++){
        for(int j = i+1; j< strlen(string); j++){
            if(string[i] > string[j]){
                val = string[i];
                string[i] = string[j];
                string[j] = val;
            }
        }
    }
    printf("%s\n", string);

    return 0;
}
