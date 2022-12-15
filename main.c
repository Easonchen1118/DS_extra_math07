#include <stdio.h>
//計算平方值與立方值
int main(){
    int num;
    while (scanf("%d", &num) != EOF) {
        int ans1 = num * num;
        int ans2 = ans1 * num;
        printf("%d %d %d\n", num, ans1, ans2);
    }
    return 0;
}
