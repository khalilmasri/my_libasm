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

int main(){

    char str[] = "Chris is DALLAT";

    printf("\nString functions\n");
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

    // index check
    print_index(str);

    // memcpy check
    print_memcpy();

    // memset check
    print_memset();

    // memmove check
    print_memmove();
        
    // read and write check
    print_read_write();

    return 0;
}
