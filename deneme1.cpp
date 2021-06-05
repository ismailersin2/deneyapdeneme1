#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"sayi gir ";
    cin>>x;
    if(x>=0){
        if(x%3==0)cout<<"sayi 3e bolunur";
        else cout<<"sayi 3e bolunmez";
    }else{
        cout<<"negatif sayi girdiniz";
    }
}
