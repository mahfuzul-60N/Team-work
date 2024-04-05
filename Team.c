#include <stdio.h>

int main(){
    int n;
    scanf("%d\n", &n);

    int implement = 0;

    for (int i=0; i < n; i++){
        int Petya, Vasya, Tonya;
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);

        //number of sure about solution
        int sure_implement = Petya + Vasya + Tonya;

        //at least two friend sure about solution then implement increment
        if (sure_implement >= 2){
            implement ++;
        }
    }
    printf ("%d\n", implement);
}
