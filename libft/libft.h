/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:45:14 by kcouchma          #+#    #+#             */
/*   Updated: 2023/11/03 10:53:11 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/******************************************************************************/
/* Structures                                                                 */
/******************************************************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/******************************************************************************/
/* C-Type                                                                     */
/******************************************************************************/

/**
 * @brief Tells whether or not `c` is a letter.
 * @param c A character.
 * @return Whether or not `c` is a letter.
 */
int		ft_isalpha(int c);

/**
 * @brief Tells whether or not `c` is a digit.
 * @param c A character.
 * @return whether or not `c` is a digit.
 */
int		ft_isdigit(int c);

/**
 * @brief Tells whether or not `c` is a letter or a digit.
 * @param c A character.
 * @return Whether or not `c` is a letter or a digit.
 */
int		ft_isalnum(char c);

/**
 * @brief Tells whether or not `c` is an ascii character.
 * @param c A character.
 * @return Whether or not `c` is an ascii character.
 */
int		ft_isascii(int c);

/**
 * @brief Tells whether or not `c` is printable (c >= 32 && c <= 126).
 * @param c A character.
 * @return Whether or not `c` is printable.
 */
int		ft_isprint(int c);

/**
 * @brief If `c` is a letter, converts it to uppercase.
 * @param c a character.
 * @return The transformed character.
 */
int		ft_toupper(int c);

/**
 * @brief If `c` is a letter, converts it to lowercase.
 * @param c a character.
 * @return The transformed character.
 */
int		ft_tolower(int c);

/******************************************************************************/
/* String-Type                                                                */
/******************************************************************************/

/**
 * @brief Calculates th length of `str`.
 * @param str A string.
 * @return The length of `str`.
 */
size_t	ft_strlen(const char *c);

/**
 * @brief Returns a pointer to the first occurence of `c` in `str` if it exists,
 * `NULL` otherwise.
 * @param str A string.
 * @param c A character.
 * @return A pointer to the first occurence of `c` in `str` if it exists,
 * `NULL` otherwise.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Returns a pointer to the last occurence of `c` in `str` if it exists,
 * `NULL` otherwise.
 * @param str A string.
 * @param c A character.
 * @return A pointer to the last occurence of `c` in `str` if it exists,
 * `NULL` otherwise.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compares with the lexical order the `n` first characters of `str_1`
 * and `str_2`.
 * @param str_1 A string.
 * @param str_2 A string.
 * @param n The max ammount of characters to compare.
 * @return The lexical order of the two strings.ft_lstdelone
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Sets `n` bytes of `ptr` to `c`.
 * @param ptr A pointer to a memory area.
 * @param c A byte.
 * @param n The ammount of bytes to set to `c`.
 * @return The `ptr` pointer.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Writes `n` zeros ('\0') to `ptr` (uses ft_memset).
 * @param ptr A pointer to a memory area.
 * @param n The amount of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Returns a pointer to the first occurence of the byte `c` in `ptr` if
 * it exists, `NULL` otherwise.
 * @param ptr A memory area.
 * @param c A byte.
 * @return A pointer to the first occurence of the byte `c` in `ptr` if it
 * exists, `NULL` otherwise.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Copies `n` bytes of `src` to `dst`. The memory areas must not overlap.
 * Use `ft_memmove` if the memory areas do overlap.
 * @param dst A pointer to a memory area.
 * @param src A pointer to a memory area.
 * @param n The ammount of bytes to copy.
 * @return The `dst` pointer.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Compares with the lexical order the `n` first bytes of `ptr_1`
 * and `ptr_2`.
 * @param ptr_1 A memory area.
 * @param ptr_2 A memory area.
 * @param n The max ammount of bytes to compare.
 * @return The lexical order of the two memory area.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief copies `n` bytes from memory area `src` to memory area `dst`.
 * The memory areas may overlap: copying takes place as though the bytes in
 * `src` are first copied into a temporary array that does not overlap `src`
 * or `dst`, and the bytes are then copied from the temporary array to `dst`.
 * @param dst A pointer to a memory area.
 * @param src A pointer to a memory area.
 * @param n The ammount of bytes to copy.
 * @return The `dst` pointer.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copies `src` to `dst`. Takes the full `size` of `dst` and guarantee
 * to NUL-terminate the result (as long as `size` is larger than 0). Note that a
 * byte for the NUL should be included in `size`. Can only operate on true "C"
 * strings. `src` must be NUL-terminated. Copies up to `size - 1` characters
 * from `src` to `dst`, NUL-terminating the result.
 * @param dst A pointer to a memory area.
 * @param src A string.
 * @param size The length of the string `ft_strlcopy` tries to create.
 * @return The length of `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Concatenate `str` to `dst`. Takes the full `size` of `dst`
 * and guarantee to NUL-terminate the result (as long as there is at least one
 * byte free in `dst`). Note that a byte for the NUL should be included in
 * `size`. Can only operate on true “C” strings. This means that both `src`
 * and `dst` must be NUL-terminated. Appends the NUL-terminated string `src` to
 * the end of `dst`. It will append at most `size - ft_strlen(dst) - 1` bytes,
 * NUL-terminating the result.
 * @param dst A pointer to a memory area.
 * @param src A string.
 * @param size The length of the string `ft_strlcat` tries to create.
 * @return The initial length of `dst` plus the length of `src`.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Locates the first occurrence of the null-terminated string `little`
 * in the string `big`, where not more than `len` characters are searched.
 * Characters that appear after a ‘\0’ character are not searched.
 * @param big The string to be searched.
 * @param little The string to search.
 * @param len The size of the search.
 * @return If `little` is an empty string, `big` is returned; if `little` occurs
 * nowhere in `big`, `NULL` is returned; otherwise a pointer to the first
 * character of the first occurrence of `little` is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of `str`.
 * @param str A string.
 * @return A copy of `str`.
 */
char	*ft_strdup(const char *s);

/**
 * @brief Allocates (with malloc(3)) and returns a substring from the
 * string `str`. The substring begins at index `start` and is of maximum
 * size `len`.
 * @param str The string from which to create the substring.
 * @param start The start index of the substring in the string `str`.
 * @param len The maximum length of the substring.
 * @return The substring or `NULL` if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’. *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return char* The new string, or NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the
 * characters specified in ’set’ removed from the beginning and the end of
 * the string.
 * @param s1 The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return char* The trimmed string, or NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained
 * by splitting ’s’ using the character ’c’ as a delimiter. The array must
 * end with a NULL pointer.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return char** The array of new strings resulting from the split, or NULL
 * if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 * @param n The integer to convert
 * @return The string representing the integer, or NULL if the allocation fails.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’, and
 * passing its index as first argument to create a new string (with malloc(3))
 * resulting from successive applications of ’f’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive applications of ’f’,
 * or NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies the function ’f’ on each character of the string passed as
 * argument, passing its index as first argument. Each character is passed by
 * address to ’f’ to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/******************************************************************************/
/* Stdlib                                                                     */
/******************************************************************************/

/**
 * @brief Converts the initial portion of the string pointed to by `str` to an
 * integer.
 * @param str The string to be converted.
 * @return The converted value.
 */
int		ft_atoi(const char *str);

/**
 * @brief Allocates memory for an array of `nmemb` elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 * If `nmemb` or `size` is 0, then calloc() returns either NULL, or a unique
 * pointer value that can later be successfully passed to free(). If the
 * multiplication of `nmemb` and `size` would result in integer overflow, then
 * calloc() returns `NULL`.
 * @param nmemb The number of elements if the array.
 * @param size The size in bytes of each element.
 * @return Return a pointer to the allocated memory or NULL if case of error.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/******************************************************************************/
/* FD-Type                                                                    */
/******************************************************************************/

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return Returns 1 (no. of characters written)
 */
int		ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 * @return Returns the number of characters written (ft_strlen(s)).
 */
int		ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string ’s’ to the given file descriptor followed by a 
 * newline.
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @
 */

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n Input int
 * @param fd The file descriptor on which to write.
 * @return int Returns the number of characters written.
 */
int		ft_putnbr_fd(long n, int fd);

/**
 * @brief ft_putnbr to hex (or other) base
 * @param n Input number to convert
 * @param base Base as a string
 * @param fd Output
 */
int		ft_putbase(size_t n, char *base, int fd);

/******************************************************************************/
/* Bonus                                                                      */
/******************************************************************************/

/**
 * @brief Allocates (with malloc(3)) and returns a new node. The member variable 
 * ’content’ is initialized with the value of the parameter ’content’. The 
 * variable ’next’ is initialized to NULL.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the node ’new’ at the beginning of the list. * 
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in a list.
 * @param lst The beginning of the list.
 * @return int The length of the list>
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 * @param lst The beginning of the list.
 * @return t_list* Last node of the list>
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node ’new’ at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Takes as a parameter a node and frees the memory of the node’s 
 * content using the function ’del’ given as a parameter and free the node. 
 * The memory of ’next’ must not be freed.
 * @param lst The node to free.
 * @param del The address of the function used to delete the content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Deletes and frees the given node and every successor of that node, 
 * using the function ’del’ and free(3). Finally, the pointer to the list 
 * must be set to NULL.
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the 
 * node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content 
 * of each node.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content 
 * of each node. Creates a new list resulting of the successive applications 
 * of the function ’f’. The ’del’ function is used to delete the content of a 
 * node if needed.
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of a node 
 * if needed.
 * @return t_list* 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif