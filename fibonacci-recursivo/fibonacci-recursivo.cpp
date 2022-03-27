#include <stdlib.h>
#include <stdio.h>
using namespace std;

int fibonacci(int x){
    if (x==0){
        return 0;
        } else if ((x==1)||(x==2)){
        return 1;
        } else {
            return fibonacci(x-1)+fibonacci(x-2);
            }
        }

int main(){
    int i;  

    for(int i=0; i<100; i++){
        printf("FIBONACCI %d é: %d\n", i+1, fibonacci(i));
    }
}