#include <iostream>
using namespace std;
int main() {
    char name[10];
    char department;
    int test1;
    int test2;
    float av;
    printf("Please input your name.... ");
    scanf("%s", &name);
    cin.ignore();
    printf("Please select your department....(a:cs b:Bio c:math) ");
    scanf("%c", &department);
    cin.ignore();
    printf("Please input your score on test 1.... ");
    scanf("%d", &test1);
    cin.ignore();
    printf("Please input your score on test 2.... ");
    scanf("%d", &test2);
    av = (float(test1) + float(test2)) / 2;
    printf("\n+---------------------+----------+------+------+-------+");
    printf("\n|        Name         |Department|Test 1|Test 2|Average|");
    printf("\n+---------------------+----------+------+------+-------+");
    printf("\n|%-21s|%10c|%6d|%6d|%7.2f|", name, department, test1, test2, av);
    printf("\n+---------------------+----------+------+------+-------+");

    return 0;
}