#include <stdio.h>

int main(void)
{
    // printf displays the string inside the quotation
    printf("Hello World!");
    return (0);
}

/**
 * #include is a preprocessor command that tells the compiler to include the
 * content of stdio.h (standard input output) in the program.
 * 
 * stdio.h file contains functions such as scanf() and printf() to take input
 * and display output respectively.
 * 
 * if you use printf() without writting #inlcude <stdio.h> your program will not
 * compile.
 * 
 * the execution of a c program starts from the main() function
 * 
 * printf() is a library function used to send formatted output to the screen,
 * in this case printf() displays Hello World! to the screen.
 * 
 * return (0) is the "Exit Status" of the program. 
 */