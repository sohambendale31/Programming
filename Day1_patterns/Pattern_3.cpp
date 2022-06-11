
/*
Print the following pattern:

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=0;
    cin>>row;
    while(counter<row){
        int column=1;
        while(column<=row){
            cout<<column<<" ";
            column++;
        }
        counter++;
        cout<<endl;
    }
}

