#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);  
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }   
    int pairs = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] != -1) {
            int count = 1;          
            for (int j = i + 1; j < N; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                    arr[j] = -1;  
                }
            }     
            pairs += count / 2; 
        }
    }  
    printf("%d", pairs);  
    return 0;
}