#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - teste la fonction delete_dnodeint_at_index
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

    /* Affichage de la liste avant suppression */
	print_dlistint(head);
	printf("-----------------\n");

    /* Suppression du nœud à l'index 5 (valeur 98) */
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");

    /* Suppression répétée du premier nœud jusqu'à la liste vide */
	while (head)
	{
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	}

	return (EXIT_SUCCESS);
}
