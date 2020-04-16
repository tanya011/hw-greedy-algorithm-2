#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct time{
    int left, right;
};
bool f(time a1, time a2){
    if(a1.left > a2.left)
        swap(a1, a2);
    if (a1.right > a2.left)
        return true;
    else
        return false;
}
int main(){
    int n;
    cin >> n;
    vector <time> lessons;
    vector<vector <time>> classrooms;
    for (int i = 0; i < n; i++){
        time t;
        cin >> t.left >> t.right;
        lessons.push_back(t);
    }
    for (int i = 0; i < n; i++) {
			int num_room = -1;
			for (int j = 0; j < classrooms.size(); j++) {
				bool flag = false;
				for (int q = 0; q < classrooms[j].size(); ++q) {
					if (f(classrooms[j][q], lessons[i])) {
						flag = true;
						break;
					}
				}
				if (flag == false) {
					num_room = j;
					break;
				}
			}
			if (num_room == -1) {
				vector <time> new_room(1, lessons[i]);
				classrooms.push_back(new_room);
			}
			else
				classrooms[num_room].push_back(lessons[i]);
		}

    cout << classrooms.size();
}
