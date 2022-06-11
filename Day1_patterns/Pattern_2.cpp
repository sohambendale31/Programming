
/*
Print the following pattern:

1 1 1
2 2 2
3 3 3

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=1;
    cin>>row;
    while(counter<=row){
        int column=0;
        while(column<row){
            cout<<counter<<" ";
            column++;
        }
        counter++;
        cout<<endl;
    }
}

