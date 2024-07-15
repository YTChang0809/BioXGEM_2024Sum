#include <iostream>
using namespace std;
int main(){

    for (int i = 1 ; i < 10; i++){
        for ( int m = 1; m < 10; m++){
            int n = i * m;  
            printf("%d*%d=%-3d",i, m, n );
        }
        printf("\n");
    }
        
    return 0;
}