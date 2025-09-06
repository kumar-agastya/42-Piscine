/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:57:28 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 11:10:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Adds a set of strings to a list
t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*node;

	// If 'size' is negative or zero, returns 0
	if(size <= 0)
		return (0);

	// node receives the string in the last position
	node = ft_create_elem((void *)strs[size - 1]);

	// The next position on the list receives the next string in a recursive way
	node->next = ft_list_push_strs(size - 1, strs);
	return(node);
}

// Creates a t_list element that is a struct
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

    // do memory allocation and check
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

    // assigns values to the struct variables
	elem->data = data;
	elem->next = NULL;

    // Returns the created element
	return (elem);
}
/* 
// Prints the values contained in each element of the chained list
void	print_list(t_list *list)
{
	t_list *current = list;

	while (current != NULL)
	{
		printf("String: %s\n", (char *)current->data);
		current = current->next;
	}
}

int main(void)
{
	// creation of the array of strings
	char	**strs = (char **)malloc(sizeof(char *) * 3);

	// declaration of the list
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));
	
	// assign values to strings
	strs[0] = "test";
	strs[1] = "of";
	strs[2] = "strings";

	// Adds a set of strings to a list
	linked_list = ft_list_push_strs(3, strs);

	// Prints the list
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
	free(strs);
} */