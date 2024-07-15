#include <iostream>
using namespace std;
int main(){
    int i;
    int j;
    int n = 0;
    float av;
    int max = 0;
    int min = 100;

    printf("Please input the number of intergers: ");
    scanf("%d",&i);
    for (int m = 1; m <= i; m++){
        printf("Interger #%d: ", m);
        scanf("%d", &j);
        n = j + n;
        if (max <= j){
            max = j;
        }
        if (min >= j){
            min = j;
        }
    }
    av = float(n) / i;
    printf("The average is %f\n", av);
    printf("The maximum is %d\n", max);
    printf("The minimum is %d", min);
    return 0;
}