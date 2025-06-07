#include <iostream>
using namespace std;
void swapvar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<" Value of new A :"<<a;
    cout<<"\n Value of new B :"<<b;
}
int main() {
int i,j;
cout<<"Enter Value of A :";
cin>>i;
cout<<"Enter Value of B :";
cin>>j;
swapvar(i,j);

}
