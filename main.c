#include <stdio.h>

#include "print.h"

int main(void)
{
    const char* text1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    print_wrapped_paragraph_with_header("text: ", text1, 0); /* 0 mean auto-width mode, depending on terminal size */
    print_wrapped_paragraph_with_header("text: ", text1, 60); /* explicit text width of 60 */
    const char* text2 = "Lorem ipsum dolor sit amet";
    print_wrapped_paragraph_with_header("text: ", text2, 0);
    const char* text3 = "Lorem";
    print_wrapped_paragraph_with_header("text: ", text3, 0);
}
