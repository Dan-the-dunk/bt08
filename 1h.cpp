#include<iostream>
using namespace std;
//dat = 0 khong duoc

int str_len(char *a){
    int count;
    for(int i = 0 ; i < 19 ; i ++ ){
        if(a[i] == 32 ) break;
        count = i ;
    }
    return count;
}
void trim_right(char* a, char* trimmedA, int n){

    int spaceCount = 0;    
    for(int i = 0 ; i < n ; i ++ ){
        trimmedA[i] = a[i];
    }
    
    
}







    
int main(){
    char str[20];
    
    for(int i = 0 ; i < 19 ; i ++ ){
        str[i] = 32;
    }

    cin>>str; 
    int n = str_len(str);
    cout<<n<<endl;
    char trimmedStr[n + 1];
    trim_right(str, trimmedStr, n);
    cout<<trimmedStr<<endl;
    
    return 0;
}