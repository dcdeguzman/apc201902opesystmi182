#include <stdio.h>

int main(){
        int sumOdd = 0;
        int sumEven = 0;
        int upperbound;


        printf("Enter the upperbound: ");
        scanf("%d", &upperbound);


        int number = 1;
        while(number <= upperbound){
                if(number % 2 == 0){
                        sumEven = sumEven + number;
                }
                else{
                        sumOdd = sumOdd + number;
                }
                ++number;
        }


        printf("The sum of odd numbers is %d. \n", sumOdd);
        printf("The sum of even numbers is %d. \n", sumEven);
        printf("The difference is %d. \n", (sumOdd - sumEven));

        return 0;
}
