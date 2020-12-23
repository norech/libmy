/*
** EPITECH PROJECT, 2020
** my_strsplit
** File description:
** Splits str to word array
*/

#include <my.h>
#include <stdlib.h>

static void fill_words_lengths(char const *str,
    int *lengths_ptr, char *separator)
{
    int i = 0;
    int j = 0;
    int sep_len = my_strlen(separator);

    lengths_ptr[j] = 0;
    while (*str != '\0') {
        if (my_strncmp(str, separator, sep_len) == 0) {
            j++;
            i = 0;
            lengths_ptr[j] = 0;
            str += sep_len;
        } else {
            lengths_ptr[j]++;
            i++;
            str++;
        }
    }
}

static void fill_words(char **words, char const *str,
    int const *lengths, char *separator)
{
    int i = 0;
    int j = 0;
    int word_pos = 0;
    int sep_len = my_strlen(separator);

    words[j] = malloc(sizeof(char) * (lengths[j] + 1));
    while (str[i] != '\0') {
        if (my_strncmp(str + i, separator, sep_len) == 0) {
            words[j][word_pos] = '\0';
            j++;
            words[j] = malloc(sizeof(char) * (lengths[j] + 1));
            word_pos = 0;
            i += sep_len;
        } else {
            words[j][word_pos] = str[i];
            word_pos++;
            i++;
        }
    }
    words[j][word_pos] = '\0';
}

static int count_words(char const *str, char *separator)
{
    int i = 1;
    int sep_len = my_strlen(separator);

    while (*str) {
        if (my_strncmp(str, separator, sep_len) == 0) {
            i++;
            str += sep_len;
        } else {
            str++;
        }
    }
    return (i);
}

char **my_strsplit(char const *str, char *separator)
{
    int words_count = count_words(str, separator);
    int *lengths = malloc(sizeof(int) * (words_count));
    fill_words_lengths(str, lengths, separator);
    char **words = malloc(sizeof(char *) * (words_count + 1));
    fill_words(words, str, lengths, separator);
    words[words_count] = NULL;
    free(lengths);
    return (words);
}
