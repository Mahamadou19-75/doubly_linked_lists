#include "lists.h"

/**
 * sum_dlistint - retourne la somme de toutes les valeurs n de la liste
 * @head: pointeur vers le premier nœud de la liste
 *
 * Return: somme des valeurs n, ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;  /* Variable pour accumuler la somme */

    /* Parcours de la liste et addition de chaque valeur n */
	while (head != NULL)
	{
	sum += head->n;  /* Ajout de la valeur du nœud courant */
	head = head->next; /* Passage au nœud suivant */
	}

	return sum;  /* Retourne la somme totale */
}
