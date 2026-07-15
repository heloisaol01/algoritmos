// Dada uma lista A de números inteiros, determine 
// se existe uma sublista de números inteiros cuja soma seja S.

//Exemplo: Seja A = {8, 35, 6, 21, 12} e S = 41. 
// Existe, entre todas as possíveis sublistas de A, 
// 2 (duas) litas cuja soma seja 41: A lista {36, 6} e a lista {8, 21, 12}.


#include <iostream>

bool soma_sub(int* a, int soma, int tam){
    if (soma == 0){
        return true;
    }
    if (soma <0 or tam == 0){
        return false;
    }
    bool r = soma_sub(a, soma-a[tam-1], tam-1); // a = lista; a[tam-1] = ultimo elemento da lista;
    r = r or soma_sub(a, soma, tam-1);
    return r;
}


int main(){
    int n, s;
    std::cin >> n >> s;
    int* a = new int[n];
    for (int i=0; i<n; ++i){
        std::cin >> a[i];
    }
    bool ans = (soma_sub(a,s,n));
    std::cout << ans << std::endl;
    delete[] a;
    return 0;
}
