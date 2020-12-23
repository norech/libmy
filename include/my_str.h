/*
** EPITECH PROJECT, 2020
** my_str
** File description:
** Source code
*/
#include <unistd.h>
#include <stdbool.h>

#ifndef MY_STR_H
#define MY_STR_H

char *my_bzero(char *res, size_t size);
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
void my_str_filter(char *str, int (*filter)(int i, char c));
void my_strpad_start(char *dest, char pattern, int size);
void my_strpad_end(char *dest, char pattern, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strinvertcase(char *str);
char **my_strsplit(char const *str, char *delimiter);
char *my_strjoin(char **arr, char *delimiter);
int my_char_in(char const *haystack, char needle);
int my_strlen(char const *str);
char *my_strconcat(int argc, ...);
int my_strcount(char const *haystack, char const *needle);
char *my_strtake(char *str, int index, int count);
char *my_substr(char *str, int start, int end);
char *my_str_repeat(char const *str, int count);
bool my_str_startswith(char const *haystack, char const *needle);
bool my_str_endswith(char const *haystack, char const *needle);
int my_strcount(char const *haystack, char const *needle);
int is_char_num(char c);
int is_char_alpha(char c);
int is_char_uppercase(char c);
int is_char_printable(char c);
int is_char_uppercase(char c);
#endif //MY_STR_H
