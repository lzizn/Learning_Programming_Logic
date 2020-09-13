#include <stdio.h>

void sort_col(int array[]);
void subs(int array1[], int array2[], int colunas);

const int col = 5;

void main(void) {
    int del, cont_del = 0;
    int mel_mas[col], pi_mas[col], mel_fem[col], pi_fem[col];
    int mt[col];
    int del_camp_m[2] = {0, 0}, del_camp_f[2] = {0, 0};
    int som_mas, som_fem;
    int i;

    scanf("%d", &del);

    while (cont_del != del) {
        //printf("linha 21\n");

        for (i = 0; i < col; i++) {
            mel_mas[i] = -1;
            mel_fem[i] = -1;
            pi_mas[i] = 32767;
            pi_fem[i] = 32767;
        }

        som_mas = 0;
        som_fem = 0;

        while (1) {
            //printf("linha 34\n");
            scanf("%d", &mt[0]);

            if (mt[0] == -1) {
                if (som_mas > del_camp_m[1]) {
                    del_camp_m[0] = cont_del + 1;
                    del_camp_m[1] = som_mas;
                }
                if (som_fem > del_camp_f[1]) {
                    del_camp_f[0] = cont_del + 1;
                    del_camp_f[1] = som_fem;
                }

                printf("MELHORES ATLETAS DA DELEGACAO %d\n", cont_del + 1);

                printf("MASCULINO: ");
                if (mel_mas[0] == -1) {
                    printf("Nenhum ");
                }
                else {
                    printf("%d ", mel_mas[0]);
                }

                printf("FEMININO: ");
                if (mel_fem[0] == -1) {
                    printf("Nenhum\n");
                }
                else {
                    printf("%d\n", mel_fem[0]);
                }

                printf("PIORES ATLETAS DA DELEGACAO %d\n", cont_del + 1);

                printf("MASCULINO: ");
                if (pi_mas[0] == 32767) {
                    printf("Nenhum ");
                }
                else {
                    printf("%d ", pi_mas[0]);
                }

                printf("FEMININO: ");
                if (pi_fem[0] == 32767) {
                    printf("Nenhum\n\n");
                }
                else {
                    printf("%d\n\n", pi_fem[0]);
                }

                cont_del++;
                break;
            }

            else {
                scanf(" %c%d%d%d", &mt[4], &mt[1], &mt[2], &mt[3]);

                sort_col(mt);

                if (mt[4] == 77) {

                    som_mas += mt[1];

                    if (mt[1] > mel_mas[1]) {
                        subs(mt, mel_mas, col);
                    }
                    else if (mt[1] == mel_mas[1]) {
                        if (mt[2] > mel_mas[2]) {
                            subs(mt, mel_mas, col);
                        }
                        else if (mt[2] == mel_mas[2]) {
                            if (mt[3] > mel_mas[3]) {
                                subs(mt, mel_mas, col);
                            }
                        }
                    }

                    if (mt[1] < pi_mas[1]) {
                        subs(mt, pi_mas, col);
                    }
                    else if (mt[1] == pi_mas[1]) {
                        if (mt[2] < pi_mas[2]) {
                            subs(mt, pi_mas, col);
                        }
                        else if (mt[2] == pi_mas[2]) {
                            if (mt[3] <= pi_mas[3]) {
                                subs(mt, pi_mas, col);
                            }
                        }
                    }
                }

                if (mt[4] == 70) {

                    som_fem += mt[1];

                    if (mt[1] > mel_fem[1]) {
                        subs(mt, mel_fem, col);
                    }
                    else if (mt[1] == mel_fem[1]) {
                        if (mt[2] > mel_fem[2]) {
                            subs(mt, mel_fem, col);
                        }
                        else if (mt[2] == mel_fem[2]) {
                            if (mt[3] > mel_fem[3]) {
                                subs(mt, mel_fem, col);
                            }
                        }
                    }

                    if (mt[1] < pi_fem[1]) {
                        subs(mt, pi_fem, col);
                    }
                    else if (mt[1] == pi_fem[1]) {
                        if (mt[2] < pi_fem[2]) {
                            subs(mt, pi_fem, col);
                        }
                        else if (mt[2] == pi_fem[2]) {
                            if (mt[3] <= pi_fem[3]) {
                                subs(mt, pi_fem, col);
                            }
                        }
                    }
                }
            }
        }
    }
    printf("DELEGACAO CAMPEA:\n");

    if (del_camp_m[0] == 0) {
        printf("MASCULINO: Nenhum ");
    }
    else {
        printf("MASCULINO: %d ", del_camp_m[0]);
    }

    if (del_camp_f[0] == 0) {
        printf("FEMININO: Nenhum\n");
    }
    else {
        printf("FEMININO: %d\n", del_camp_f[0]);
    }
}

void sort_col(int array[]) {
    //printf("funcao sort col\n");
    int i, j, min, temp;
    for (i = 1; i <= 2; i++) {
        min = i;
        for (j = i + 1; j <= 3; j++) {
            if (array[j] > array[min]) {
            min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

void subs(int array1[], int array2[], int colunas) {
    //printf("funcao subs\n");
    int i;

    for (i = 0; i < colunas; i++) {
        array2[i] = array1[i];
    }
}
