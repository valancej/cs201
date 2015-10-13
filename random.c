#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[])
{


        if (argc==3 && atoi(argv[1]) <= 0 && atoi(argv[2]) > 100)
        {
                printf("First input needs to be greater than 0");
                exit(1);
        }
        else if(argc==3 && atoi(argv[1]) > 0 && atoi(argv[2]) < 100)
        {
                printf("Second input needs to be greater than or equal to 100");
                exit(1);
        }
        else if(argc != 3)
        {
                printf("Please enter two numbers");
                exit(1);
        }

                int  n = atoi(argv[1]);
                int  y = atoi(argv[2]);
                int randNums [n];
                int  i;

                /* Intializes random number generator */

                srand(time(NULL));

                /* Populate the array */

                for(i=0; i < n; i++)
                {
                        randNums[i] = rand() % y;
                }

                 return(0);
}

                                                                                                             50,0-1        Bot


                   