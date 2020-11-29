/*
** EPITECH PROJECT, 2020
** my_strsplit
** File description:
** Splits str to word array
*/

#include <my.h>
#include <stdlib.h>

static void fill_words_lengths(char const *str,
int *lengths_ptr, char separator)
{
    int i = 0;
    int j = 0;

    lengths_ptr[j] = 0;
    while (*str != '\0') {
        if (*str == separator) {
            j++;
            i = 0;
            lengths_ptr[j] = 0;
        } else {
            lengths_ptr[j]++;
            i++;
        }
        str++;
    }
}

static void fill_words(char **words, char const *str,
int const *lengths, char separator)
{
    int i = 0;
    int j = 0;
    int word_pos = 0;

    words[j] = malloc(sizeof(char) * (lengths[j] + 1));
    while (str[i] != '\0') {
        if (str[i] == separator) {
            words[j][word_pos] = '\0';
            j++;
            words[j] = malloc(sizeof(char) * (lengths[j] + 1));
            word_pos = 0;
        } else {
            words[j][word_pos] = str[i];
            word_pos++;
        }
        i++;
    }
    words[j][word_pos] = '\0';
}

static int count_words(char const *str, char separator)
{
    int i = 1;
    while (*str) {
        if (*str == separator)
            i++;
        str++;
    }
    return (i);
}

char **my_strsplit(char const *str, char separator)
{
    int words_count = count_words(str, separator);
    int *lengths = malloc(sizeof(int) * (words_count));
    fill_words_lengths(str, lengths, separator);
    char **words = malloc(sizeof(char*) * (words_count + 1));
    fill_words(words, str, lengths, separator);
    words[words_count] = NULL;
    free(lengths);
    return (words);
}
