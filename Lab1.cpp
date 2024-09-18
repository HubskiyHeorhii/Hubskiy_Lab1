#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int point;
    
    
    cout<<"Write your point: ";
    cin>>point;
    
    if(point >= 90 && point <= 100) {
        cout << "Point: A" << endl;
    }
    
    else if(point >= 80 && point < 90) {
        cout << "Point: B" << endl;
    }
    
    else if(point >= 70 && point < 80) {
        cout << "Point: C" << endl;
    }
    
    else if(point >= 60 && point < 70) {
        cout << "Point: D" << endl;
    }

    else if(point >= 0 && point < 60) {
        cout << "Point: F" << endl;
    }
    
    return 0;

}
