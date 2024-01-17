#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int arr[] = {5, 7, 33., 45, 2, 34, 678, 32, 12,24};
    int sized = sizeof(arr)/sizeof(arr[0]);

    for (int x=0; x < sized-1; x++){

        for (int y = 0; y<sized-1; y++){
            if (arr[y] < arr[y+1]){
                int temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }

    printf("Sorted array is displayed below.\n");
    for (int x=0; x<sized; x++){
        printf(" %d ", arr[x]);
    }
    */
    int rout, rout1_cash = 3000, rout2_cash = 3500, rout3_cash = 3000, travelers, total;
    printf("Enter number of travelers: ");
    scanf("%d", travelers);
    printf("Enter rout(1, 2 or 3): ");
    scanf("%d", rout);

    switch (rout){
        case 1:
            total = rout1_cash * travelers;
            printf("Total amount for travelers is %ld.", total);
            break;
        case 2:
            printf("Total amount for travelers is %d.", rout2_cash*travelers);
            break;
        case 3:
            printf("Total amount for travelers is %d.", rout3_cash*travelers);
            break;
        default:
            printf("Invalid rout entered!");
    }

    return 0;
}
