#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include<string.h> 

#define EXT_SUCCESS 0 
#define EXT_ERR_TOO_FEW_ARGS 1

int main(int argc, char** argv) {
    char *basePath = NULL; 
    char *token = NULL; 
    if(argc < 2) {
        fprintf(stderr, "USAGE: PATH \n"); 
        exit(EXT_ERR_TOO_FEW_ARGS);
    }

    basePath = (char *)malloc(sizeof(char) * (strlen(argv[1]) + 1)); 
    strcpy(basePath, argv[1]);

    token = strtok(basePath, "/"); 

    // if basepPath is "/home/user/file.txt", then basePath will be "file.txt"
    while(token != NULL) {
        basePath = token; 
        token = strtok(NULL, "/"); 
    }

    printf("Base path: %s\n", basePath);

    exit(EXIT_SUCCESS); 

}