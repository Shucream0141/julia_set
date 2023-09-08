/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:12:23 by sendo             #+#    #+#             */
/*   Updated: 2023/06/30 16:36:30 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*memo;

	if (count == 0 || size == 0)
	{
		memo = malloc(0);
		return (memo);
	}
	else if (count > SIZE_MAX / size)
	{
		return (NULL);
	}
	memo = malloc(count * size);
	if (!memo)
		return (NULL);
	ft_bzero(memo, count * size);
	return (memo);
}

// int main()
// {
// 	char *p;
// 	p = ft_calloc(0,0);
// 	printf("%p\n",p);
// 	p = calloc(0,0);
// 	printf("%p\n",p);
// 	free(p);
// 	return 0;
// }

// int	main(void)
// {
// 	int *ptr, *p;
// 	int i;
// 	//callocではヒープメモリという静的領域やスタック領域とは別の容量を確保している。使用後はfree関数で確保したメモリを解放しなければならない。
// 	/* 500個のintサイズのメモリを確保 */
// 	ptr = (int *)calloc(0, 0);
// 	if (ptr == NULL)
// 	{
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	p = ptr;
// 	for (i = 0; i < 500; i++)
// 	{
// 		printf("%d", *p);
// 		p++;
// 	}
// 	/* メモリの開放 */
// 	free(ptr);

// 	printf("\n");
// 	ptr = (int *)ft_calloc(0,0);
// 	if (ptr == NULL)
// 	{
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr;
// 	for (i = 0; i < 500; i++)
// 	{
// 		printf("%d", *p);
// 		p++;
// 	}
// 	// 	/* メモリの開放 */
// 	free(ptr);
// 	return (0);
// }

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q a.out");
// }