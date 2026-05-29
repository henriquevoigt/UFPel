#include <stdio.h>

int memo[10000];

int troco_minimo_td(int V, int moedas[], int num_moedas) {

    if (V == 0) return 0;
    if (V < 0) return 100000;
    if (memo[V] != -1) return memo[V];

    int res = 100000;
    for (int i = 0; i < num_moedas; i++) {
        int sub_res = troco_minimo_td(V - moedas[i], moedas, num_moedas);
        if (sub_res != 100000 && sub_res + 1 < res) {
            res = sub_res + 1;
        }
    }
    memo[V] = res;
    return res;

}

int main() {
    
    int moedas[] = {1, 3, 4};
    int V = 6;
    int num_moedas = 3;

    for(int i = 0; i <= V; i++) {
        memo[i] = -1;
    }

    int ans = troco_minimo_td(V, moedas, num_moedas);
    printf("%d\n", ans == 100000 ? -1 : ans);

    return 0;
}