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

    for (int i = 1; i < n; i++){
        if (l[i] >= r[last]){
            k++;
            last = i;
        }
    }
    cout << k;
}
