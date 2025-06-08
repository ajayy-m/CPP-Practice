#include <iostream>
using namespace std;
void sum(int a[]){
    int n; 
    cout<<"Enter the Size of the Array : ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"Enter the Array index "<<i<<" : ";
        cin>>a[i];
    }
    int sum;
    for (int j=0;j<n;j++){
        sum+=a[j];
    }
    cout<<"Sum of the Array is : "<<sum;
}
int main() {
int j[100];
sum(j);

}
