#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

void loadchar (vector< vector<string>>& char_str  ,string path){
    
    ifstream infile("font.txt");
    int countline = 0, charnum = 0;
    while (!infile.eof())
    {
        
        

        getline( infile, char_str[charnum][countline] );

        countline++;
        if(countline >= 6){
            countline = 0;
            charnum++;
            string str;
            getline(infile,str);
        }
        
    }
}


void printbanner( vector< vector<string>>& char_str , string input){
    for(int i = 0 ; i < 6  ; i ++ ){

        for(int j = 0 ; j < input.size() ; j ++){
            char ch = tolower(input[j]);
            int n = ch - 'a';
            cout<<char_str[n][i]<<" ";
        }
        cout<<endl;
    }

}



int main(){
    
    vector< vector<string> > char_str(26 , vector<string>(6));
    loadchar(char_str,"font.txt");
    string input;
    cout<<"Nhap ki tu ";
    cin>>input;
    printbanner(char_str, input);
    
    //da xong mang string 2 chieu.
}
//if 0 co thi 0 hien thi