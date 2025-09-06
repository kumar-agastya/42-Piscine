/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agastyakumar <agastyakumar@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:58:15 by agastyakuma       #+#    #+#             */
/*   Updated: 2025/09/06 11:10:55 by agastyakuma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
// This function multiplied the value passed by 3
void ft_mul(void *data)
{
	*(int *)data *= 3;
}
 */
// Adds one value for each item on the list
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	while(begin_list != NULL)
	{
		list_ptr = begin_list;

		// Call the function to incremeant the data value
		(*f)(list_ptr->data);

		// advances to the next list
		begin_list = begin_list->next;
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

	// Adds one value for each item on the list
	ft_list_foreach(linked_list, &ft_mul);

	printf("\nLinked list after:\n");
	print_list(linked_list);

	// free of memory allocated
	free(linked_list);
} */