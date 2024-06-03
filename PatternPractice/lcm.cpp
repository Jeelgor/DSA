#include <iostream>
#include <vector>
using namespace std;

int lcm(int a, int b) {
    vector<int> a1, b1;
    
    for(int i = 1; i < 10; i++) {
        a1.push_back(a * i);
    }
    for(int i = 1; i < 10; i++) {
        b1.push_back(b * i);
    }
    for(int i = 0; i < a1.size(); i++) {
        for(int j = 0; j < b1.size(); j++) {
            if(a1[i] == b1[j]) {
                return a1[i]; 
            }
        }
    }
    return -1;
}

int main() {
    int a = 2;
    int b = 3;
    int result = lcm(a, b);
    if (result != -1) {
        cout << "LCM of " << a << " and " << b << " is: " << result << endl;
    } else {
        cout << "LCM not found." << endl;
    }
    
    return 0;
}