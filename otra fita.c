#include <stdio.h>

fact(int n){ //por recusividade: � a capacidade que uma linguagem tem de permitir que uma fun��o possa invocar a s� mesma
    int x,y;

    if (n == 0)
        return 1;
    x = n-1;
    y = fact(x);
    return (n*y);
}
int main(){

}
