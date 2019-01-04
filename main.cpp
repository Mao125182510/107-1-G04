int main()
{
    int row ,col;
    int seat[8][8]={0};
    int p;
    int n;
    while(1)
    {
        printf("Enter your seat :");
        scanf("%d %d",&row,&col);
        if(seat[row][col]==0)//沒人
        {
            seat[row][col]++;
            prArray(seat);
            seatnum(seat);
            printf("\nWould you like to eat anything ?:");
            scanf("%d",&p);
        }
        else//有人
        {
            prArray(seat);
            printf("\nThere's someone sitting here\n");
            popcorn(p);
        }
    }
}
