/******************************************************************************

alex cavaretta 1sinf3

*******************************************************************************/
#include <stdio.h>

int main()
{
    char vocale;
    printf("inserisci una vocale");
    scanf("%c",&vocale);
    switch (vocale) {
        case 'a':
            printf("il suo ascii e:97");
            printf("è una vocale");
            break;
        case 'A':
            printf("il suo ascii e:65");
            printf("è una vocale");
            break;
        case 'e':
            printf("il suo ascii e:101");
            printf("è una vocale");
            break;
        case 'E':
            printf("il suo ascii e:69");
            printf("è una vocale");
            break;
        case 'i':
            printf("il suo ascii e:105");
            printf("è una vocale");
            break;
        case 'I':
            printf("il suo ascii e:75");
            printf("è una vocale");
            break;
        case 'o':
            printf("il suo ascii e:111");
            printf("è una vocale");
            break;
        case 'O':
            printf("il suo ascii e:79");
            printf("è una vocale");
            break;
        case 'u':
            printf("il suo ascii e:117");
            printf("è una vocale");
            break;
        case 'U':
            printf("il suo ascii e:85");
            printf("è una vocale");
            break;
        default:
            printf("NON E' UNA VOCALE");
    }
    return 0;
}


