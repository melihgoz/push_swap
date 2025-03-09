/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 03:32:32 by megoz             #+#    #+#             */
/*   Updated: 2025/02/24 03:32:32 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    is_three(int *list_a, int argc)
{
    int i;

    i = 0;
    if (argc == 4)
    {
        if (list_a[i] > list_a[i + 1] && list_a[i] < list_a[i + 2])
            sa(list_a);
        else if (list_a[i] > list_a[i + 1] && list_a[i] > list_a[i + 2] && list_a[i + 1] < list_a[i + 2])
            ra(list_a);
        else if (list_a[i] > list_a[i + 1] && list_a[i] > list_a[i + 2] && list_a[i + 1] > list_a[i + 2])
        {
            ra(list_a);
            sa(list_a);
        }
        else if (list_a[i] < list_a[i + 1] && list_a[i] > list_a[i + 2])
            rra(list_a);
        else if (list_a[i] < list_a[i + 1] && list_a[i] < list_a[i + 2] && list_a[i + 1] > list_a[i + 2])
        {
            sa(list_a);
            ra(list_a);
        }
        else if (list_a[i] < list_a[i + 1] && list_a[i] < list_a[i + 2] && list_a[i + 1] < list_a[i + 2])
        {
            rra(list_a);
            sa(list_a);
        }
    }
}

// Helper function to find the index of the smallest element in stack a
int find_min_index(int *a)
{
    int min_index = 1; // Start from the first element (index 1)
    for (int i = 2; i <= a[0]; i++)
    {
        if (a[i] < a[min_index])
            min_index = i;
    }
    return min_index;
}

void    is_raddix(int *list_a, int *list_b, int argc)
{
    printf("is_raddix çalışıyor \n");
    //sağdaki bitleri hesapla ve sağdan sırala
    //A DA 1
    //B DE 0 OLACAK ŞEKİLDE HER ADIMDA DEVAM ET
    //BASAMAK BASAMAK İLERLEME METHODU
    // bitleri putnbrbase ile hesapla sonra itoa ile asciiye çevir sonrasında string karşılaştırması ile sırala



}