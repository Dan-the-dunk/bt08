#include<iostream>
using namespace std;

void reverse(char *a){
    int count;
    for(int i = 0 ; i < 20 ; i ++ ){
        if(a[i] == '!' ) break;
        count = i ;
    }
    cout<<count<<endl;
    char reverse_string[count + 1];
    int j = 0;
    for(int i = 0 ; i < count/2 ; i ++ ){
        swap(a[i],a[count - i - 1]);
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