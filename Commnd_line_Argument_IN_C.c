#include <stdio.h>
int main( int argc,  char const * argv[] ) {
    printf( "The no of arguments passed is %d\n", argc );
    for( int i = 0; i < argc; i++ ) {
        printf( "Argument %d: %s\n", i, argv[i] );
    }
    return 0;
}