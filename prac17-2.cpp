#include <iostream>
using namespace std;
int gcd(int a, int b){
    int c;
    if (a > b){
        c = a;
        a = b;
        b = c;
    }
    int u = b % a;
    int v = a % u;

    while(u !=0 && v != 0){
        u = u % v;
        if (u == 0){
            break;
        }
        v = v % u;
    }
    if (u != 0){
        return u;
    }else if (v != 0){
        return v;
    }
    return 0;
    
}

int main(){
    int s, t;
    printf("Please input two integers: ");
    scanf("%d %d", &s, &t);
    printf("GCD is %d", gcd(s,t));

    return 0;
}