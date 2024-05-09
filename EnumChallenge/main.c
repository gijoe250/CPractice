#include <stdio.h>

int main(){
    enum Company {
        Google,
        Facebook,
        Xerox,
        Yahoo,
        Ebay,
        Microsoft
    };
    
    //Create variables with values Google, Xerox, and Ebay
    enum Company first = Google, second = Xerox, third = Ebay;
    
    printf( "%d %d %d \n", second, first, third);  
    
    return 0;
}
