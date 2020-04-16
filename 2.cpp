#include <iostream>
using namespace std;
int main(){
    int k = 1;
    int last = 0;
    int n;
    cin >> n;
    int l[n], r[n];
    for (int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (r[j] > r[j + 1])
                swap(r[j], r[j+1]);
                swap(l[j], l[j+1]);
            }
        }
    for (int i = 1; i < n; i++){
        if (l[i] >= r[last]){
            k++;
            last = i;
        }
    }
    cout << k;
}
