void prArray(int seat[][9])//印出座位，有人就記一個 * 號，沒人就空白
{
    for(int i=1;i<9;i++)
    {
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        for(int j=1;j<9;j++)
        {
            printf("|");
            if(seat[i][j]==0)
                printf("     ");
            else
                printf("  *  ");
        }
        printf("|\n");
    }
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
}
