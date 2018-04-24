/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suduko.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 23:22:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/04/24 00:39:45 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     isAvail(int puzzle[][9], int row, int col, int num)
{
    int     rowstart;
    int     colstart;
    int     i;

    rowstart = (row/3) * 3;
    colstart = (col/3) * 3;
    for (i = 0; i < 9; ++i)
    {
        if (puzzle[row][i] == num) return (0);
        if (puzzle[i][col] == num) return (0);
        if (puzzle[rowstart + (i % 3)][colstart + ( i / 3)] == num) return (0);
    }
    return (1);
}

int     fillSudoku(int puzzle[][9], int row, int col)
{
    int     i;

    if (row < 9 && col < 9)
    {
        if (puzzle[row][col])
        {
            if ((col + 1) < 9) return fillSudoku(puzzle, row, col + 1);
            else if ((row + 1) < 9) return fillSudoku(puzzle, row + 1, 0);
            else return (1);
        }else
        {
            for (i = 0; i < 9; ++i)
            {
                if (isAvail(puzzle, row, col, i + 1))
                {
                    puzzle[row][col] = i + 1;
                    if (fillSudoku(puzzle, row, col)) return (1);
                    else puzzle[row][col] = 0;
                }
            }
        }
        return (0);
    }
    else return (1);
}

int     main()
{
    int i, j;

    int puzzle[9][9]={{0, 0, 0, 0, 0, 0, 0, 9, 0},
                      {1, 9, 0, 4, 7, 0, 6, 0, 8},
                      {0, 5, 2, 8, 1, 9, 4, 0, 7},
                      {2, 0, 0, 0, 4, 8, 0, 0, 0},
                      {0, 0, 9, 0, 0, 0, 5, 0, 0},
                      {0, 0, 0, 7, 5, 0, 0, 0, 0},
                      {9, 0, 7, 3, 6, 4, 1, 8, 0},
                      {5, 0, 6, 0, 8, 1, 0, 7, 4},
                      {0, 8, 0, 0, 0, 0, 0, 0, 0}};
    if (fillSudoku(puzzle, 0, 0))
    {
        printf("\n+-----+-----+-----+\n");
        for (i = 1; i < 10; ++i)
        {
            for (j = 1; j < 10; ++j) printf("|%d", puzzle[i - 1][j - 1]);
            printf("|\n");
            if (i % 3 == 0) printf("+-----+-----+-----+\n");
        }
    }else
        printf("\n\nwtf\n\n");

    return (0);
}
