#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int i, j;
    int x=0, count=0;
    for(i=0; i<5; i++){
        for (j=0; j<5; j++){
            cin >> x;
            if (x == 1)break;
        }
        if(x==1)break;
    }
    while(i != 2){
        if(i>2)i--;
        else i++;
        count++;
    }
    while(j != 2){
        if(j>2)j--;
        else j++;
        count++;
    }
    cout << count << endl;

    return 0;
}
