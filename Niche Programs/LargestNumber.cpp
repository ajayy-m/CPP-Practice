#include<iostream>
using namespace std;
void large(int a,int b,int c){
if ((a>b) && (a>c)){
    cout<<a<<" is greator than "<<b<<" and "<<c;
}
else if ((b>a) && (b>c)){
    cout<<b<<" is greator than "<<a<<" and "<<c;
}
else if ((c>b) && (c>a)){
    cout<<c<<" is greator than "<<a<<" and "<<b;
   }
else{
    cout<<"";
   }
}

int main(){
    int i,j,k;
    cout<<"Welcome to Three Largest Number Program :\n";
    cout<<"\nEnter the number A :";
    cin>>i;
    cout<<"\nEnter the number B :";
    cin>>j;
    cout<<"\nEnter the number C :";
    cin>>k;
large(i,j,k);

}
