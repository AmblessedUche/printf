#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct type_cont - a type that has steps and data type modifier
 * @steps: steps taken to reach the type modifier
 * @fun: pointer to the print handler
 * @precision_flag: for precision
 * @precision: number of precision
 * @width_flag: for width control
 * @width: actual width;
 * @hyphene_flag: handle hyphene flag
 */
	typedef struct type_cont
{
	int steps;
	char *(*fun)(va_list ap);
	int precision_flag;
	int precision;
	int width_flag;
	int width;
	int hyphene_flag;
}
	type_flags;

/**
 * struct type -a struct
 * @spec: is modifier character e.g c, d, i, s, etc
 * @fun: function pointer to the function to execute the print functionality.
 */

	typedef struct type
{
	char spec;
	char *(*fun)(va_list pt);
}
	specifier;


	int _printf(const char *format, ...);

	void _putchar(char c);

	char *print_string(va_list ptr);
	char *printch(va_list ptr);
	char *print_integer(va_list ap);

	void print_number(long number, int *len);
	type_flags type_checker(const char *);
	int match(const char *s, va_list ptr);

	void *alloc_init(int size);
	void int_to_str(long num, char *str, int *cur_ind);
	int string_size(char *str);
	char *reverse_string(char *str);
	char *to_str(long num);
	void _puts(char *str);
	char *string_preceded_by_spaces(int spaces, char *str, int for_precision);
	char *string_succeeded_by_spaces(int spaces, char *str);
	char *rot13(char *str);
	char *flags_handler(char *str, type_flags flags);

	int base_len(unsigned int n, unsigned int base);
	char *_memcpy(char *dest, char *src, unsigned int n);
	char *rev_string(char *s);

	void handle_overflow(int *i, int *len, va_list ptr, type_flags flags);
#endif
