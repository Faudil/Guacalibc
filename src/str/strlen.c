/*
** EPITECH PROJECT, 2018
** Guacalibc
** File description:
** strlen.c
*/

int strlen(const char *str) {
    register int i = 0;
    while (str[i++] != '\0');
    return i;
}