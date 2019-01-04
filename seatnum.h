void seatnum(int seat[][9],int *n)
{
    int m=0;
    for(int i=1;i<9;i++)
    {
        for(int j=1;j<9;j++)
        {
            if(seat[i][j]!=0)
            {
                *n=m+1;
                m++;
                printf("(%d,%d) ",i,j);
            }
        }
    }
}
