#include <stdio.h>
int seats[6][4];
int seat;

int bookSeat()
{
    printf("How Many seat do you want: ");
    scanf("%d", &seat);

    for (int row = 0; row < 6; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (seats[row][column] == 1)
            {
                break;
            }
            else
            {
                for (int i = 0; i < seat; i++)
                {
                    
                }
            }
        }
    }
}
int showBus()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", seats[i][j]);
        }
    }
}
int main()
{
    int ticketBooking;

    for (int i = 0;; i++)
    {
        printf("Do you want Book Ticket so Enter - 1\n");
        printf("Do you want Show Seat so Enter - 2\n");
        printf("Do you want Exit so Enter - 3\n");
        scanf("%d", &ticketBooking);

        switch (ticketBooking)
        {
        case 1:
            bookSeat();
            break;
        case 2:
            showBus();
            break;
        case 3:
            break;
        default:
            printf("Not a Optional");
            break;
        }
    }
}