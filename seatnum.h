void seatnum(int seat[][8],int *n)
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(seat[i][j]==1)
            {
                *n++;
                printf("(%d,%d) ",i,j);
            }
        }
    }
}
