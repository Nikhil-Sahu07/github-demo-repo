#include <stdio.h>

int main()
    {
        int i, j;
        int arr[3][3];

        for ( i = 0; i <3; i++)
        {
            printf("Enter numbers for the Row %d---\n",i+1);

            // loop for elements of the row
            for(j=0; j<3; j++)
                {
                    printf("Enter element %d:",j+1);
                    scanf("%d",&arr[i][j]);
                }
        }
        printf("Your data has been submitted successfully..!\n");
        
        printf("Here's your 3x3 array---");
        
        for (i=0; i<3; i++)
            {
                printf("\n");
                for(j=0; j<3; j++)
                    {
                        printf("%d ",arr[i][j]);
                    }
            }
    
        
    }