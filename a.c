/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:18:25 by megoz             #+#    #+#             */
/*   Updated: 2025/03/10 20:30:27 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-----------------------------
  Helper function: getMax
  Finds the maximum value in stack a.
  (Assumes a[1]..a[a[0]] contain the values.)
------------------------------*/
int getMax(int *a)
{
    int max = a[1];
    int i;
    for (i = 0; i <= a[0]; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

/*-----------------------------
  Radix Sort using push_swap operations

  We use binary radix sort. For each bit from the least
  significant to the most significant:
    - For each element in a, if the current bit is 1, rotate a (ra);
      otherwise push it to b (pb).
    - Then push all elements back from b to a (pa).
------------------------------*/
void radix_sort_push_swap(t_stack *a, t_stack *b)
{
    int i, j;
    int max = getMax(a->array);
    int max_bits = 0;
    int count;
    
    while ((max >> max_bits) != 0)
        max_bits++;    
        for (i = 0; i < max_bits;) {
            printf("A-EELEMKAUNT%d\n",a->elem_count);
        count = a->elem_count;
        for (int y = 0; y < a->elem_count; y++)
            printf("A-NIN %d. ELEMANI = %d\n", y, a->array[y]);
        printf("İ ŞUAN: %d\n", i);
        while (count > 0)
        {
            
            if (((a->array[0] >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
            count--;
        }
        count = b->elem_count;
        i++;
        printf("İ ŞUAN: %d\n", i);
        for (int y = 0; y < b->elem_count; y++)
            printf("b-NIN %d. ELEMANI = %d\n", y, b->array[y]);
        while (count > 0)
        {
            if (((b->array[0] >> i) & 1) == 1)
                pa(a, b);
            else
                rb(b);
            count--;
        }
    }
    for (int k = 0; k < count; k++)
    {
        printf("%d. eleman = %d\n", k, a->array[k]);
    }
}
