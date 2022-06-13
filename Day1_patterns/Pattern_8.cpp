
/*
Print the following pattern:

1
2 2
3 3 3
4 4 4 4

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=1;
    cin>>row;
    while(counter<=row){
        int column=0;
        while(column<counter){
            cout<<counter<<" ";
            column++;
        }
        cout<<endl;
        counter++;
    }

}

