#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int values = 0;
int range = 100000;
int flag = 0;

int main(){
    //Start timer
    clock_t start = clock();
    //Number to test
    for (int n = 2; n < range; n++){
        flag = 0;
        for (int divisore = 2; divisore < n; divisore++){
            //SE TROVA DUE DIVISORI ALLORA NON PRIMO, ESCLUDE 1
            if (n % divisore == 0)
            {
                //NON PRIMO
                if (flag == 1){
                    break;
                }
                flag = 1;
            }
        }
        //PRIMO
        if (flag == 0){
            values++;
        }
    }
    //Print results
    printf("Numeri primi trovati: %d\n", values);
    printf("Tempo impiegato: %fms", (float)((clock() - start) * 1000)/CLOCKS_PER_SEC);

    return EXIT_SUCCESS;
}