#include <iostream>
using namespace std;
main()
{
    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                                // *
    //     {                                                       // **
    //         if (j <= i)                                         // ***
    //             printf("*");                                    // ****
    //         else                                                // *****
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                               //      *
    //     {                                                      //     **
    //         if (j >= 6 - i)                                    //    ***
    //             printf("*");                                   //   ****
    //         else                                               //  *****
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                               // *****
    //     {                                                      //  ****
    //         if (j >= i)                                        //   ***
    //             printf("*");                                   //    **
    //         else                                               //     *
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                               // *
    //     {                                                      // **
    //         if (j <= i)                                        // ***
    //             printf("*");                                   // ****
    //         else                                               // *****
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                              // *****
    //     {                                                     // ****
    //         if (j <= 6 - i)                                   // ***
    //             printf("*");                                  // **
    //         else                                              // *
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // int i, j;
    // for (i = 1; i <= 5; i++)
    // {
    //     for (j = 1; j <= 5; j++)                               // *****
    //     {                                                      // *   *
    //         if (i == 1 || i == 5 || j == 1 || j == 5)          // *   *
    //             printf("*");                                   // *   *
    //         else                                               // *****
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)                                                  // *
        {                                                                         // **
            if ((i == 1 && (j == 1 || j == 5)) || (i == 2 && (j == 2 || j == 4))) // ***
                printf("*");                                                      // ****
            else                                                                  // *****
                printf(" ");
        }
        printf("\n");
    }
}
