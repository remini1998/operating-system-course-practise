//
// Created by 彼端。 on 2018/10/31.
//

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string s;
    ifstream ifs("/proc", ifstream::in);
    while (ifs.good()){
        getline(ifs, s);
        cout<<s;
    }
    ifs.close();
    return 0;
}
