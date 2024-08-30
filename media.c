#include<stdio.h>
#include<stdlib.h>


int main (){

    float n1, n2, n3;
    float p1, p2, p3;
    float soma, media;

    printf( " Digite a primeira nota e seu respectivo peso: \n "  );
    scanf( "%f", &n1 );
    scanf( "%f", &p1 );

    printf( " Digite a segunda nota e seu respectivo peso: \n "  );
    scanf( "%f", &n2 );
    scanf( "%f", &p2 );

    printf( " Digite a terceira nota e seu respectivo peso: \n "  );
    scanf( "%f", &n3 );
    scanf( "%f", &p3 );

    soma = ( n1 * p1 ) + ( n2 * p2 ) + ( n3 * p3 );
    media = soma / ( p1 + p2 + p3 );

    printf( " A soma ponderada do Aluno é: %.2f\n", soma );
    printf( " A média ponderada do aluno é: %.2f\n", media );


 return 0;

}
