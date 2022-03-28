#include<iostream>
using namespace std;

void reverse(char *a){
    int count;
    for(int i = 0 ; i < 20 ; i ++ ){
        if(a[i] == '!' ) break;
        count = i ;
    }
    cout<<count<<endl;
    int c_num = 0;
    for(int i = 0 ; i < count ; i ++ ){
        if(a[i] == 'c'){
            for(int j = i ; j < count - 1 ; j ++ ){
                a[j] = a[j + 1];               
            }
        }
    }
    for(int i = count - c_num - 2 ; i < count ; i ++ ){
        a[i] = 32;
    }
    

    
    
    
}

int main(){
    char str[20];
    for(int i = 0 ; i < 20 ; i ++ ){
        str[i] = '!';
    }

    cin>>str;
    
    reverse(str);
    cout<<str;
    return 0;
}