#include<iostream>
using namespace std;

void pad_left(char *a, int n){
    int count;
    for(int i = 0 ; i < 19 ; i ++ ){
        if(a[i] == 32 ) break;
        count = i ;
    }
    
    if(count >= n ){
        return;
    }
    else{
        int gap = n - count; 
        for(int i = n - 1 ; i >= count - 1  ; i -- ){
            a[i] = a[i - gap];
        }
        for(int i = 0 ; i < gap ; i ++ ){
            a[i] = 32;
        }
    }
}
int main(){
    char str[20];
    int n;
    for(int i = 0 ; i < 19 ; i ++ ){
        str[i] = 32;
    }

    cin>>str>>n;
    cout<<str<<endl;
    pad_left(str ,n);
    cout<<str;
    return 0;
}