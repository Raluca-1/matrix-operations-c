#include<stdio.h>

//1.Afisare matrice
int main(){
int a[102][102],m,n;
int i,j;
printf("Introduceti nr de linii(n):");
scanf("%d",&n);
printf("\nIntroduceti nr de coloane(m):");
scanf("%d",&m);

printf("\nIntroduceti valorile matricei\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("\nElementul [%d][%d]:",i+1,j+1);
        scanf("%d",&a[i][j]);


    }
}
printf("\nMatricea este:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}

//2.Suma elementelor de pe o linie



printf("\nSuma elementelor de pe fiecare linie\n");
for(i=0;i<n;i++){
    int s=0;
    for(j=0;j<m;j++){
        s=s+a[i][j];
    }
    printf("Suma elementelor liniei %d este:%d\n",i+1,s);
}

//3.Suma elementelor de pe o coloana


printf("\nSuma elementelor de pe fiecare coloana\n");
for(j=0;j<m;j++){
    int s2=0;
    for(i=0;i<n;i++){
        s2=s2+a[i][j];
    }
    printf("Suma elementelor coloanei %d este:%d\n",j+1,s2);
}



//4.Interschimbarea a doua linii
int l1,l2;//linie 1; linie 2

printf("Introduceti numerele liniilor de interschimbare:(1-%d)\n",n);
printf("\nLinia 1:");
scanf("%d",&l1);
printf("\nLinia 2:");
scanf("%d",&l2);
if(l1<1 || l1>n || l2<1 || l2>n){
    printf("Numerele liniilor sunt invalide");
}
// Ajustăm numerele liniilor pentru a lucra cu indici de la 0
l1--;
l2--;
/*Așadar, linie1-- și linie2-- sunt utilizate pentru a ajusta numerele introduse de utilizator (care sunt indexate de la 1)
astfel încât să corespundă cu indecșii reali ai matricei în C (care sunt indexați de la 0).*/
// Interschimbarea celor două linii

for(j=0;j<m;j++){
    int aux=a[l1][j];
    a[l1][j]=a[l2][j];
    a[l2][j]=aux;
}
printf("\nMatricea dupa interschimabarea liniilor %d si %d este:\n",l1+1,l2+1);
for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  // Trecere pe linia următoare după fiecare rând
    }

//5.Cautarea unei valori in matrice
int cauta_valoare=0;
printf("\nIntroduceti valoarea pe care doriti sa o cautati:");
scanf("%d",&cauta_valoare);

 int gasita = 0;  // Variabila care va arăta dacă valoarea a fost găsită
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(a[i][j] == cauta_valoare) {
                printf("Valoarea %d a fost gasita la pozitia [%d][%d].\n", cauta_valoare, i + 1, j + 1);
                gasita = 1;
                break;  // Oprire din bucla interioara, deoarece am găsit valoarea
            }
        }
        if(gasita) {
            break;  // Oprire din bucla exterioara, dacă am găsit valoarea
        }
    }

    // Dacă valoarea nu a fost găsită
    if(!gasita) {
        printf("Valoarea %d nu a fost gasita in matrice.\n", cauta_valoare);
    }

return 0;
}
