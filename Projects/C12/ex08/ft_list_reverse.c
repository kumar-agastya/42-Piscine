/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:58:04 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 11:10:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// reverses the values on the list
void ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	current = (*begin_list);
	prev = NULL;
	next = NULL;
	while(current != NULL)
	{
		// 'Next' keeps the address of the next position
		next = current->next;

		// The next position receives the previous
		current->next = prev;

		// The previous position receives the current
		prev = current;

		// The current position receives the address that was stored in Next
		current = next;
	}
	*begin_list = prev;
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

// Prints the values contained in each element of the chained list
void	print_list(t_list *list)
{
	t_list *current = list;

	while (current)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int main(void)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

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

	printf("Linked list before:\n");
	print_list(linked_list);

	// reverses the values on the list
	ft_list_reverse(&linked_list);

	printf("Linked list after:\n");
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
} */