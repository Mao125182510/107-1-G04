int main()
{
    int row ,col;
    int seat[9][9]={0};
    int p;
    int n;
    char cont='Y';
     printf("Enter your seat :");
        scanf("%d %d",&row,&col);
        if(seat[row][col]==0)
        {
            seat[row][col]++;
            prArray(seat);
            seatnum(seat);
            printf("\nWould you like to have some popcorn (Y/N) ?:");
            cont = getche();
        }
        else
        {
            prArray(seat);
            printf("\nThere's someone sitting here\n");
            popcorn(cont);
        }
        while(1)
    {
	while(cont=='Y')
    {
        printf("\nEnter your seat :");
        scanf("%d %d",&row,&col);
        if(seat[row][col]==0)
        {
            seat[row][col]++;
            prArray(seat);
            seatnum(seat);
            printf("\nWould you like to have some popcorn (Y/N) ?:");
            cont = getche();
        }
        else
        {
            prArray(seat);
            printf("\nThere's someone sitting here\n");
            popcorn(cont);
        }
    }
    while(cont!='Y')
    {
        printf("\nEnter your seat :");
        scanf("%d %d",&row,&col);
        if(seat[row][col]==0)
        {
            seat[row][col]++;
            prArray(seat);
            seatnum(seat);
            printf("\nWould you like to have some popcorn (Y/N) ?:");
            cont = getche();
        }
        else
        {
            prArray(seat);
            printf("\nThere's someone sitting here\n");
            popcorn(cont);
        }
    }
}
}
