/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:38:19 by alvutina          #+#    #+#             */
/*   Updated: 2024/04/28 12:37:43 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/
#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str && *str)
	{
		if (*str != c && check == 0)
		{
			check = 1;
			i++;
		}
		else if (*str == c)
			check = 0;
		str++;
	}
	return (i);
}

static char	*ft_copy_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**all;

	all = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!(s && all))
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			all[j++] = ft_copy_word(s, index, i);
			index = -1;
		}
		i++;
	}
	all[j] = 0;
	return (all);
}
/*
int main() {
    char const *str = "!!HUIH!";
    char **split = ft_split(str, '!');

    if (split) {
        int i = 0;
        while (split[i]) {
            printf("%s\n", split[i]);
            i++;
        }

        // Освобождаем память, выделенную для массива строк
        i = 0;
        while (split[i]) {
            free(split[i]);
            i++;
        }
        free(split);
    } else {
        printf("Ошибка при разделении строки.\n");
    }

    return 0;
}*/
