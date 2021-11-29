/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: My_libasm
 *
 *        Version:  1.0
 *        Created:  11/29/2021 01:41:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chris Dallat, Khalil Masree
 *   Organization:  ELU
 *
 * =====================================================================================
 */

#include "../include/include.h"

void print_strlen(char* str){

    printf("C strlen: %ld Libasm strlen: %ld \n", strlen(str),_my_strlen(str));
}

void print_strncmp(char *str){

    char src[] = "my_name";
    printf("C strncmp: %d Libasm strncmp: %d \n", strncmp(str, src, 1), _my_strncmp(str, src ,1));
}

void print_strcmp(char *str){
    
    char src[] = "my_name";
    printf("C strcmp: %d Libasm strcmp: %d \n", strcmp(str, src),  _my_strcmp(str, src));
}

void print_strcasecmp(char *str){

    char src[] = "cHRIS IS dallat";
    printf("C strcasecmp: %d Libasm strcasecmp: %d \n", strcasecmp(str, src),  _my_strcasecmp(str, src));
}

void print_strchr(char *str){

    char c = 'A';
    printf("C strchar : %s Libasm strchar : %s \n", strchr(str, c),  _my_strchr(str, c));
}


int main(){

    char str[] = "Chris is DALLAT";

    // strlen check
    print_strlen(str);

    // strncmp check 
    print_strncmp(str);

    // strcpy check
    print_strcmp(str);

    // strcasecmp check
    print_strcasecmp(str);

    // strchr check
    print_strchr(str);
        
    return 0;
}
