#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    list<int> l;
    l.push_back(100);
    l.push_back(200);
    l.push_back(300);
    cout << "List elements: ";
    for (int x : l) {
        cout << x << " ";
    cout << endl;
    return 0;
}
