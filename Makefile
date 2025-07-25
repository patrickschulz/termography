example: main.c print.c print.h
	gcc -Wall -Wextra -g -O0 -DPRINT_ENABLE_TERM_WIDTH main.c print.c -o example
