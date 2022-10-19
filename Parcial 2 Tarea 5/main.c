#include <stdio.h>
#include <stdlib.h>

void leer_arreglo(int n, int arr[]);
void ordenamiento_incersion(int n, int arr[]);
void imprime_arr(int n, int arr[]);

int main()
{
    int arr[100];
    int n;
    printf("Tam del arreglo: ");
    scanf("%d", &n);
    leer_arreglo(n,arr);
    ordenamiento_incersion(n,arr);
    imprime_arr(n,arr);
    return 0;
}

void leer_arreglo(int n, int arr[]){
    printf("Datos del arreglo: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
}

void ordenamiento_incersion(int n, int arr[]){
    int pos, aux;
    for (int i=0;i<n;i++){
        pos=i;
        aux=arr[i];
        while ((pos>0)&&(arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=aux;
    }
}

void imprime_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
