#include <iostream>
using namespace std;
bool isGreaterthan(double x, int y){
    if(x>y){
        return true;
    }
    else{
        return false;
    }
}

int main ( ){
    /**int x=0 ;
    int y=5 ; 

    while (x<y){
        printf("%i/n",x);
        x=x+3;  // x+=3
    }
   
    if (x%2 == 0) {
        printf("x is even/n");
    } 
    else {
        printf("x is odd/n");
    }
**/

double x = 33;
int y = 7;

if ( isGreaterthan(x,y) ) {
    printf("%f > %i\n", x,y);
}
else {
    printf("%f <= %i\n", x,y);

}




}