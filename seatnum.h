void seatnum(int seat[][8],int *n)
{
    int m=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
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
