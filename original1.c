#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list, *current = NULL, *aux = NULL;
	
	while(temp->next != NULL)
	{
		if(temp->n > temp->next->n)
		{
			current = temp->next;
			temp->next =  current->next; 
			current->prev = temp->prev;
			temp->prev = current;
			current->prev->next = current;
			current->next = temp;
			if (temp->next != NULL)
				temp->next->prev = temp;		
			print_list(*list);
			while(current->prev != NULL)
			{
				if (current->n > current->prev->n)
					break;
				if(current->n < current->prev->n)
				{
					aux = current->prev;
					current->prev =  aux->prev; 
					aux->next = current->next;
					current->next = aux;
					aux->next->prev = aux;
					aux->prev = current;
					if (current->prev != NULL)
						current->prev->next = current;
					if(current->prev == NULL)
						*list = current;
					print_list(*list);
				}
			}
		}
		else
			temp = temp->next;
	}
}
