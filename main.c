
# include "inc/EXE_practice.h"
# include "inc/EXE_fish.h"
# include "inc/EXE_search.h"
# include "inc/EXE_letcode.h"
# include "inc/EXE_pointer.h"
int main() {

    char * copyfrom = "test5qwewq";
    char * copyto = "q";

    printf("%s\n",copyto);
    stringCopy(copyfrom,copyto);
    printf("===========================\n");
    printf("===========================\n");
    printf("===========================\n");
    printf("%s\n",copyfrom);
    return 0;
}


