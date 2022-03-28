#include<iostream>
using namespace std;

void pad_right(char *a, int n){
    int count;
    for(int i = 0 ; i < 20 ; i ++ ){
        if(a[i] == 32 ) break;
        count = i ;
    }
    
    if(count >= n ){
        return;
    }
    else{
        for(int i = count ; i < n ; i ++ ){
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
    pad_right(str ,n);
    cout<<str;
    return 0;
}