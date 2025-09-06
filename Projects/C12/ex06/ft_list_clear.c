/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:57:38 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 11:10:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
// This function is just to test
void print_and_free(void *data)
{
	printf("%d\n", *(int *)data);
	data = NULL;
}
 */
// Clean all information on the list
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	// Variables are declared to prevent memory from being released at the wrong time
    t_list *current = begin_list;
    t_list *next;
    while (current != NULL)
    {   
        next = current->next;

		// Cleans the value stored on data
        (*free_fct)(current->data);

		// Releases the memory allocated to this element
        free(current);
        current = next;
    }
}
/*
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

int main(void)
{
	t_list	*linked_list;

	// declaration of values
	int a = 1;
	int b = 2;
	int c = 3;

	// declaration and assign of pointers
	void *ptr1 = &a;
	void *ptr2 = &b;
	void *ptr3 = &c;

	// Creation of List Elements
	linked_list = ft_create_elem(ptr1);
	linked_list->next = ft_create_elem(ptr2);
	linked_list->next->next = ft_create_elem(ptr3);

	// Clean all information on the list
	ft_list_clear(linked_list, &print_and_free);

	print_list(linked_list);
} */