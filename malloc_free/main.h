#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *str_concat_malloc(char *s1, char *s2, unsigned int size);
void free_strings(char *s1, char *s2, int s1_null, int s2_null);

#endif
