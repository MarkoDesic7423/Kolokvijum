#include <stdio.h>

int main(){

int godina;


printf("Unesite godinu rodjenja: ");
scanf("%d", &godina);

if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
    printf("Rodjen si u prestupnoj godini.\n");
} 
else {
    printf("Nisi rodjen u prestupnoj godini.\n");
}

return 0;
}
