#include <iostream>
using namespace std;
void calculator(float a,float b,float c){
    if (c==1){
        cout<<"Addition of "<<a<<" and "<<b<<":"<<a+b;
    }
    else if (c==2){
        cout<<"Subtraction of "<<a<<" and "<<b<<":"<<a-b;
    }
    else if (c==3){
        cout<<"Multipication of "<<a<<" and "<<b<<":"<<a*b;
    }
    else if (c==4){
        cout<<"Division of "<<a<<" and "<<b<<":"<<a/b;
    }
    else{
        cout<<"";
    }
}
int main(){
cout<<"Welcome to a Simple Calculator!\n";
int i,j,k;
cout<<"Enter the variable A :";
cin>>i;
cout<<"\nEnter the variable B :";
cin>>j;
cout<<"Which Operations would like to perform?\n Type 1 for Addition\n Type 2 for Subtraction \n Type 3 for Multipication \n Type 4 for Division\n";
cin>>k;

calculator(i,j,k);
}
