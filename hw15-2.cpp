#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    float av = 0;
    char a ;
    char n = 'n';
    while (true){
        printf("Number 1: ");
        scanf("%d",&n1);
        printf("Number 2: ");
        scanf("%d",&n2);
        if (n1 > n2){
        printf("Error!! Number 1 > Number 2!!\n");
        }
        if(n1 <= n2){
            av = ( n1 + n2 )/2.0 ;
            printf("Sum = %.2f\n", av);
            printf("Again(Y/N)?? ");
            scanf(" %c", &a);
        }
        if (a == 'n' || a == 'N'){
            break;
        }
    }
    
    return 0;
}