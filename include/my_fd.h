/*
** EPITECH PROJECT, 2020
** my_fd
** File description:
** Source code
*/

#ifndef MY_FD_H
#define MY_FD_H

int my_fd_put_digit(int fd, int i);
int my_fd_putchar(int fd, char c);
int my_fd_putstr(int fd, char const *str);

#ifndef STDOUT_FILENO
    #define STDOUT_FILENO 1
    #define STDERR_FILENO 2
    #define STDIN_FILENO  0
#endif
#endif //MY_FD_H
