#include<iostream>
using namespace std;

int main(){
    int n;
    long long num,sum=0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lli", &num);
        sum += num;
    }
    
    printf("%lli\n",sum>=0?sum:sum*-1);
}
