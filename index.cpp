#include <iostream>
using namespace std;

void line(char symb,int count){
    for(int i=0;i<count;++i){
        cout<<symb;
    }
     cout<<endl; 
}

void foundsymb(string line, char num){
    int founded = 0;
    for(char i: line){
        if(num==i){
            founded++;
        }
    }
    if(founded==0){
        cout<<"No symbol";
    }
    else cout<<founded<< endl;
}

void del(string line, char num);

int main(){
    
    // line('+', 20);
    // line('@', 5);
    // for(int i =0;i<5;++i){
    //     cout<<1;}

    string line;
    char num;

    cout<<"Enter line: ";
    getline(cin, line);
    cout<<"Enter symb: ";
    cin>> num;

    // foundsymb(line, num);
    del(line, num);




}
    
void del(string line, char num){
    // 1 way
    // string res = "";
    // for(char i: line){
    //     if(num!=i){
    //         res += i;
    //     }
    // }
    // cout<< res<<endl;

    // 2 way 
    line.erase(remove(line.begin(), line.end(), num), line.end());
    cout<<line<<endl;

}  

    

    
    







