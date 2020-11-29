/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** Header for libmy
*/
#include <unistd.h>

#ifndef MY_H_
#define MY_H_

typedef struct parsed_args {
    int argc;
    char **argv;
    char *flags;
} parsed_args_t;

void *my_calloc(int size, int count);
int my_putchar(char c);
int my_isneg(int nb);
int my_put_digit(int i);
int my_put_nbr(int nb);
int my_put_nbr_base(int nb, int radix);
int my_put_long_long_nbr(long long nb);
int my_ultoa(char *output, unsigned long nb, int radix);
int my_itoa(char *output, int nb, int radix);
int my_ltoa(char *output, long nb, int radix);
int my_lltoa(char *output, long long int nb, int radix);
int my_size_t_to_string(char *output, size_t nb, int radix);
int my_intlen(int number, int base);
int my_longlen(long number, int base);
int my_longlonglen(long long number, int base);
int my_size_t_len(size_t number, int base);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_numlen(int number);
char *my_strinvertcase(char *str);
char **my_strsplit(char const *str, char delimiter);
int my_char_in(char const *haystack, char needle);
char my_get_digit_char(int i);
int my_show_word_array(char const **elements);
float my_float_to_exponent(float number, int *exponent);
int my_put_float(float nb, int digits);
float my_round_float(float nb, int digits);
char *my_bzero(char *res, size_t size);
void my_swap_ptr(void **e1, void **e2);
void my_str_filter(char *str, int (*filter)(int i, char c));
void my_str_deletepos(char *str, int pos);
void my_strpad_start(char *dest, char pattern, int size);
void my_strpad_end(char *dest, char pattern, int size);
void my_free_strarray(char **array);
int my_printf(char *s, ...);
parsed_args_t my_parse_args(int argc, char **argv);
void *my_memset(void *dest, void *val, size_t size);
void *my_memcpy(void *dest, void *val, size_t size);

#endif
