#include <iostream>
#include <stdio.h>

using namespace std;

int m[10][10];

void small(int x, int y, int r) {
    if (y - r >= 0) m[x][y-r]++;
    if (x - r >= 0) m[x-r][y]++;
    if (x + r >= 0) m[x+r][y]++;
    if (y + r >= 0) m[x][y+r]++;
    m[x][y]++;
}

void middle(int x, int y) {
    for (int i = -1; i < 2; i++) for (int j = -1; j < 2; j ++){
        if (x + i >= 0 && x+i <= 9 && y + j >= 0 && y + j <= 9) m[x + i][y + i]++;
    }
}

void large(int x, int y) {
    middle(x, y);
    small(x, y, 2);
    m[x][y]--;
}

int main() {
    int x, y, n, i, j, h, k;
    while(scanf("%d, %d, %d", &x, &y, &n) != EOF) {
        if (n == 1) small(x, y, 1);
        if (n == 2) middle(x, y);
        if (n == 3) large(x, y);
    }
    n = 0;
    h = 0;
    k = 0;
    for (i = 0; i < 10; i++) for (j = 0; j < 10; j++) {
        if (m[i][j] == 0) k++; else h = h < m[i][j] ? m[i][j] : h;
    }
    cout << k << endl << h << endl;
    return 0;
}
