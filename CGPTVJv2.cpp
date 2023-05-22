#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <mmsystem.h>

using namespace std;

void showLoadingBar(int total){
    cout << "Cargando..." << endl;

    for (int i = 0; i <= total; ++i) {
        int percentage = (i * 100) / total;
        cout << "[";

        int j = 0;
        for (; j < percentage / 10; ++j) {
            cout << "-=-=-";
        }
        for (; j < 10; ++j) {
            cout << " ";
        }

        cout << "]" << percentage << "%" << "\r";
        cout.flush();

        Beep(200, 100);

        Sleep(100);
    }

    Beep(1000, 500);

    cout << endl;
}

int V = 3;
int BLOQ;
int P01 = 0, P02 = 0, P03 = 0;
int GOVR = 0;

void level01() {
    if (P01 >= 0 && V > 0) {
        char RESP[20];
        char SOLU[10][25] = {
            "NUNCA",
            "OIDOS SORDOS",
            "EL TUERTO ES REY",
            "LE LLEGA SU SABADO",
            "BIEN NO VENGA",
            "CUERPO QUE LO AGUANTE",
            "A AULLAR SE ENSENIA",
            "POCO APRIETA",
            "BUENA CARA",
            "AMANECE MAS TEMPRANO"};

        string PHRAS[] = {
            "Más vale tarde que...",
            "A palabras necias...",
            "En tierra de ciegos...",
            "A cada chancho...",
            "No hay mal que por...",
            "No hay mal que dure cien años ni...",
            "El que con lobos anda...",
            "El que mucho abarca...",
            "A mal tiempo...",
            "No por mucho madrugar..."};

        srand(time(NULL));
        int r = rand() % 10;
        BLOQ = r;

        printf("Nivel 1\n\nCompleta de manera correcta los siguientes refranes de la cultura mexicana\n\n");
        printf("%s...?\n\nIngresa tu respuesta:\n", PHRAS[r].c_str());
        int a, b, c;

        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 10;

        while ((a == b || a == c || b == c) || (a != r && b != r && c != r)) {
            a = rand() % 10;
            b = rand() % 10;
            c = rand() % 10;
        }

        printf("Las posibles respuestas son:\n1. %s\n2. %s\n3. %s\n", SOLU[a], SOLU[b], SOLU[c]);

        fflush(stdin);
        gets(RESP);
        strupr(RESP);

        while (strcmp(RESP, SOLU[r]) != 0 && V > 0) {
            system("cls");
            V--;

            printf("\nTe has equivocado, aún cuentas con estas %d vidas\n\n", V);
            if (V > 0) {
                srand(time(NULL));
                r = rand() % 10;
                BLOQ = r;
                printf("%s...?\n\nIngresa tu respuesta:\n", PHRAS[r].c_str());
                srand(time(NULL));

                a = rand() % 10;
                b = rand() % 10;
                c = rand() % 10;

                while (a != r && c != r && b != r) {
                    a = rand() % 10;
                    b = rand() % 10;
                    c = rand() % 10;
                }

                printf("Te dejo las posibles respuestas:\n1. %s\n2. %s\n3. %s\n", SOLU[a], SOLU[b], SOLU[c]);
                fflush(stdin);
                gets(RESP);
                strupr(RESP);
            }
        }

        if (strcmp(RESP, SOLU[r]) == 0) {
            printf("\n¡Felicidades! Tu respuesta es correcta\n");
            P01 = P01 + 1;
            //level02(); // Avanzar al siguiente nivel
        }
        else {
            printf("\nSe te acabaron las vidas, la respuesta era: %s\n", SOLU[r]);
        }
    }
    else {
        if (V == 0) {
            printf("\nNo cuentas con vidas\n");
        }
        else {
            printf("\nAún no puedes acceder a este nivel, sigue jugando para desbloquearlo!\n");
        }
    }
}

void level02() {
    if (P01 >= 1 && V > 0) {
        char RESP[20];
        char SOLU[10][25] = {
            "NUNCA",
            "OIDOS SORDOS",
            "EL TUERTO ES REY",
            "LE LLEGA SU SABADO",
            "BIEN NO VENGA",
            "CUERPO QUE LO AGUANTE",
            "A AULLAR SE ENSENIA",
            "POCO APRIETA",
            "BUENA CARA",
            "AMANECE MAS TEMPRANO"
        };

        string PHRAS[] = {
            "Más vale tarde que",
            "A palabras necias",
            "En tierra de ciegos",
            "A cada chancho",
            "No hay mal que por",
            "No hay mal que dure cien años ni",
            "El que con lobos anda",
            "El que mucho abarca",
            "A mal tiempo",
            "No por mucho madrugar"
        };

        srand(time(NULL));
        int r, rr;
        r = rand() % 10;
        while (BLOQ == r) {
            r = rand() % 10;
        }

        printf("SEGUNDO NIVEL! Un poco más de dificultad, nada fuera de este mundo\n");
        printf("%s... \n\nNo cuentas con ayuda, da tu respuesta\n", PHRAS[r].c_str());

        fflush(stdin);
        gets(RESP);
        strupr(RESP);

        while (strcmp(RESP, SOLU[r]) != 0 && V > 0) {
            system("cls");
            V--;

            printf("Te has equivocado, aún cuentas con %d vidas\n", V);
            if (V > 0) {
                r = rand() % 10;
                while (BLOQ == r) {
                    r = rand() % 10;
                }

                printf("%s...?\n\nIngresa tu respuesta\n", PHRAS[r].c_str());
                fflush(stdin);
                gets(RESP);
                strupr(RESP);
            }
        }

        if (strcmp(RESP, SOLU[r]) == 0) {
            printf("\nTu respuesta es correcta\n");
            P02 = P02 + 1;
            //level03(); // Avanzar al siguiente nivel
        }
        else {
            printf("Haz terminado con tus vidas, la respuesta correcta era: %s\n", SOLU[r]);
            GOVR = GOVR + 1;
        }

        system("cls");

        if (GOVR == 0) {
            srand(time(NULL));
            rr = rand() % 10;
            while (BLOQ == rr && r == rr) {
                rr = rand() % 10;
            }

            printf("\n%s...?\n\nIngresa tu respuesta:\n", PHRAS[rr].c_str());
            fflush(stdin);
            gets(RESP);
            strupr(RESP);

            while (strcmp(RESP, SOLU[rr]) != 0 && V > 0) {
                system("cls");
                V--;

                printf("Te has equivocado, aún cuentas con %d vidas\n", V);
                if (V > 0) {
                    r = rand() % 10;
                    while (BLOQ == rr) {
                        rr = rand() % 10;
                    }

                    printf("%s...?\n\nIngresa tu respuesta:\n", PHRAS[rr].c_str());
                    fflush(stdin);
                    gets(RESP);
                    strupr(RESP);
                }
            }

            if (strcmp(RESP, SOLU[rr]) == 0) {
                printf("Las respuestas correctas eran:\n");
                P02 = P02 + 1;
                //level03(); // Avanzar al siguiente nivel
            }
            else {
                printf("Haz terminado con tus vidas, la respuesta correcta era: %s\n", SOLU[r]);
            }
        }
        else {
            printf("\nFin\n");
        }
    }
    else {
        if (V == 0) {
            printf("No cuentas con vidas suficientes\n");
        }
        else {
            printf("No cuentas con niveles suficientes para seguir adelante, sigue bloqueado\n");
        }
    }
}

void level03() {
    // Código para el tercer nivel
}


int main() {
    int opc;
    system("color e9");
    showLoadingBar(10);

    printf("Bienvenido, contesta correctamente el siguiente juego, diviertete!\n\n");
    printf("1. Nivel 1\n");
    printf("2. Nivel 2\n");
    printf("3. Nivel 3\n");
    printf("4. Salir\n");
    printf("Elige una opcion: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            level01();
            break;
        case 2:
            level02();
            break;
        case 3:
            level03();
            break;
        case 4:
            printf("\nGracias por jugar\n");
            break;
        default:
            printf("\nOpcion no valida\n");
            break;
    }




   system("color e9");
    showLoadingBar(10);

printf("Bienvenido, contesta correctamente el siguiente juego, diviertete!\n\n");
    printf("1. Nivel 1\n");
    printf("2. Nivel 2\n");
    printf("3. Nivel 3\n");
    printf("4. Salir\n");
    printf("Elige una opcion: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            level01();
            break;
        case 2:
            level02();
            break;
        /*case 3:
            level03();
            break;
        case 4:
            printf("\nGracias por jugar\n");
            break;*/
        default:
            printf("\nOpcion no valida\n");
            break;
    }

    return 0;
}
