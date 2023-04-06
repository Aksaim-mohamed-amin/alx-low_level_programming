#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int square_root(int n, int i);
int is_prime_number(int n);
int prime(int n, int i);
int is_palindrome(char *s);
int str_len(char *s);
int cmp(char *s, int len, int i);
int wildcmp(char *s1, char *s2);
int cmp2(char *s1, char *s2, int len1, int len2, int i1, int i2);
int skip_ast(char *s1, char *s2, int i1, int i2, int j);

#endif /* MAIN_H */
