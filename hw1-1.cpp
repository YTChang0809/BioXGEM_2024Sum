#include <iostream>
using namespace std;

int main(){
    int second;
    int a;
    int b;
    int c;
    scanf("%d", &second);
    a = second/3600;
    b = (second%3600)/60;
    c = (second%3600)%60;
    printf("%d hour %d minute %d second", a, b, c);
    
    return 0;
}
