/**
Q What are the different String operations available in standard C library?
A string.h is the standard C library for string operations:
 following are the function in side it:
 
  #include <strings.h>

       int strcasecmp(const char *s1, const char *s2);
              Compare the strings s1 and s2 ignoring case.

       int strncasecmp(const char s1[.n], const char s2[.n], size_t n);
              Compare the first n bytes of the strings s1 and s2
              ignoring case.

       char *index(const char *s, int c);
              Identical to strchr(3).

       char *rindex(const char *s, int c);
              Identical to strrchr(3).

       char *stpcpy(char *restrict dest, const char *restrict src);
              Copy a string from src to dest, returning a pointer to the
              end of the resulting string at dest.

       char *strcat(char *restrict dest, const char *restrict src);
              Append the string src to the string dest, returning a
              pointer dest.

       char *strchr(const char *s, int c);
              Return a pointer to the first occurrence of the character
              c in the string s.

       int strcmp(const char *s1, const char *s2);
              Compare the strings s1 with s2.

       int strcoll(const char *s1, const char *s2);
              Compare the strings s1 with s2 using the current locale.

       char *strcpy(char *restrict dest, const char *restrict src);
              Copy the string src to dest, returning a pointer to the
              start of dest.

       size_t strcspn(const char *s, const char *reject);
              Calculate the length of the initial segment of the string
              s which does not contain any of bytes in the string
              reject,

       char *strdup(const char *s);
              Return a duplicate of the string s in memory allocated
              using malloc(3).

       char *strfry(char *string);
              Randomly swap the characters in string.

       size_t strlen(const char *s);
              Return the length of the string s.

       char *strncat(char dest[restrict strlen(.dest) + .n + 1],
                     const char src[restrict .n],
                     size_t n);
              Append at most n bytes from the unterminated string src to
              the string dest, returning a pointer to dest.

       int strncmp(const char s1[.n], const char s2[.n], size_t n);
              Compare at most n bytes of the strings s1 and s2.

       char *strpbrk(const char *s, const char *accept);
              Return a pointer to the first occurrence in the string s
              of one of the bytes in the string accept.

       char *strrchr(const char *s, int c);
              Return a pointer to the last occurrence of the character c
              in the string s.

       char *strsep(char **restrict stringp, const char *restrict
       delim);
              Extract the initial token in stringp that is delimited by
              one of the bytes in delim.

       size_t strspn(const char *s, const char *accept);
              Calculate the length of the starting segment in the string
              s that consists entirely of bytes in accept.

       char *strstr(const char *haystack, const char *needle);
              Find the first occurrence of the substring needle in the
              string haystack, returning a pointer to the found
              substring.

       char *strtok(char *restrict s, const char *restrict delim);
              Extract tokens from the string s that are delimited by one
              of the bytes in delim.

       size_t strxfrm(char dest[restrict .n], const char src[restrict .n],
                      size_t n);
              Transforms src to the current locale and copies the first
              n bytes to dest.

   Obsolete functions
       char *strncpy(char dest[restrict .n], const char src[restrict .n],
                     size_t n);
              Copy at most n bytes from string src to dest, returning a
              pointer to the start of dest.
 
*/