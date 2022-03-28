#include<iostream>
using namespace std;

int str_len(char *a){
    int count;
    for(int i = 0 ; i < 19 ; i ++ ){
        if(a[i] == 0 ) break;
        count = i ;
    }
    return count;
}
void trimleft(char* a, int n){

    int spaceCount = 0;    
    for(int i = 0 ; i < 19 ; i ++ ){
        if(a[i] != 32 ){
            break;
        }
        else{
            spaceCount ++;
        }
    }
    //00abcd;
    for(int i = 0 ; i <= n - spaceCount - 1  ; i ++ ) {
        a[i] = a[i+spaceCount];
    }
    
}







    
int main(){
    char str[20];
    
    for(int i = 0 ; i < 19 ; i ++ ){
        str[i] = 0;
    }

    cin>>str; 
    int n = str_len(str);
    cout<<n<<endl;
    
    trimleft(str,n);
    cout<<str;
    return 0;
}