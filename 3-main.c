#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - teste la fonction add_dnodeint_end
 *
 * Return: Toujours EXIT_SUCCESS
 */
int main(void)
{
	dlistint_t *head;  /* Pointeur vers le premier nœud de la liste */

	head = NULL;       /* La liste est initialement vide */

    /* Ajout de plusieurs nœuds à la fin de la liste */
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
		add_dnodeint_end(&head, 1024);

    /* Affichage de la liste */
	print_dlistint(head);

	return (EXIT_SUCCESS);
}
