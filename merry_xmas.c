#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 19
#define COLS 26

void make_frame(const char ft[][COLS], const char sn[][COLS], char frame[][COLS]);
void rotate_snow(char sn[][COLS]);
void draw_frame(const char frame[][COLS]);
void delay(double sec);
void clear_screen();

int main()
{
    const char fir_tree[ROWS][COLS] =
    {
        "                         ",
        "                         ",
        "                         ",
        "           /\\            ",
        "          <  >           ",
        "          /\\/\\           ",
        "         /  o \\          ",
        "        /o     \\         ",
        "       /_      _\\        ",
        "        /      \\         ",
        "       /    o   \\        ",
        "      /  o       \\       ",
        "     /_        o _\\      ",
        "      /          \\       ",
        "     /    o       \\      ",
        "    /          o   \\     ",
        "   /__o_____________\\    ",
        "          |  |           ",
        "*************************"
    };

    char snow[ROWS - 1][COLS] =
    {
        "   *    *       *    *   ",
        "  *       *     *  *     ",
        "       *    *     *     *",
        "  *       *    *         ",
        "     *      *        *   ",
        "       *         *       ",
        "*           *        *   ",
        "        *            *  *",
        "    *              *     ",
        "      *        *         ",
        "*       *               *",
        "              *          ",
        "    *   *          *    *",
        "             *           ",
        "     *              *    ",
        "  *       *           *  ",
        "         *         *     ",
        "     *              *   *",
    };

    char frame[ROWS][COLS];

    while (1)
    {
        make_frame(fir_tree, snow, frame);
        draw_frame(frame);
        delay(0.1);
        rotate_snow(snow);
        clear_screen();
    }

    return 0;
}

void make_frame(const char ft[][COLS], const char sn[][COLS], char frame[][COLS])
{
    strcpy(frame[ROWS - 1], ft[ROWS - 1]);
    for (int i = 0; i < ROWS - 1; i++)
    {
        strcpy(frame[i], ft[i]);
        for (int j = 0; j < COLS; j++)
        {
            if (sn[i][j] == '*')
            {
                frame[i][j] = '*';
            }
        }
    }
}

void rotate_snow(char sn[][COLS])
{
    char temp[COLS];
    strcpy(temp, sn[ROWS - 2]);
    for (int i = ROWS - 3; i >= 0; i--)
    {
        strcpy(sn[i + 1], sn[i]);
    }
    strcpy(sn[0], temp);
}

void draw_frame(const char frame[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        puts(frame[i]);
    }
}

void delay(double sec)
{
    clock_t start = clock();
    while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
        continue;
}

void clear_screen()
{
    system("cls");
}
