# my_libasm

Is an assembly library.

## What is assembly?

An assembly language is a low-level programming language designed for a specific type of processor. It may be produced by compiling source code from a high-level programming language (such as C/C++) but can also be written from scratch.

## Functions made in assembly

```c
- strlen      -> my_strlen
- strchr      -> my_strchr
- memset      -> my_memset
- memcpy      -> my_memcpy
- strcmp      -> my_strcmp
- memmove     -> my_memmove

- strncmp     -> my_strncmp
- strcasecmp  -> my_strcasecmp
- index       -> my_index

- read        -> my_read
- write       -> my_write
```
## How to run?

1. You will need to have `nasm`
```
sudo apt update
sudo apt install nasm
```
2. Now you will be able to run the program, to make file
 ```
make
```
3. You can run the premade test cases with
```
./my_libasm
```
   * if you wish to have your own test cases you will have to comment `line 24` in `src/main.c` and write them.
4. After you've done using `./my_libasm` you can `make clean`
    * To clean the objects
         ``` 
          make clean
         ```
    * To clean the objects and the run file `./my_libasm`
         ```
         make fclean
         ```
    * To `make clean` and `make fclean`
         ```
         make re
         ```
    
