void prArray(int seat[][8])
{
    for(int i=0;i<8;i++)
    {
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        for(int j=0;j<8;j++)
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
