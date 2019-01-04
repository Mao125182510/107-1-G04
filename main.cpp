int main()
{
    int row ,col;
    int seat[9][9]={0};
    int c;
    int n=0;
    while(1)
    {
        printf("Enter your seat :");
        scanf("%d %d",&row,&col);
        if(seat[row][col]==0)
        {
            seat[row][col]++;
            prArray(seat);
            seatnum(seat,&n);
            printf("\n%d seats left",64-n);
            printf("\nWould you like to eat anything ?:");
            scanf("%d",&seat[row][col]);
        }
        else
        {
            prArray(seat);
            c=seat[row][col];
            food(c);
        }
    }
}
