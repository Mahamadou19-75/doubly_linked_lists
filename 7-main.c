#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - teste la fonction insert_dnodeint_at_index
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

    /* Affichage de la liste avant insertion */
	print_dlistint(head);
	printf("-----------------\n");

    /* Insertion d'un nouveau nœud à l'index 5 avec la valeur 4096 */
	insert_dnodeint_at_index(&head, 5, 4096);

    /* Affichage de la liste après insertion */
	print_dlistint(head);

    /* Libération de toute la mémoire allouée pour la liste */
	free_dlistint(head);
	head = NULL;  /* Évite un pointeur suspendu */

	return (EXIT_SUCCESS);
}

