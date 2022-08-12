#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    double a,b,c;
    bool check;

    while(1){
        check=false;
        cout << "叫块计:" << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        

        if((a<=0||b<=0||c<=0)||(a+b<c||a+c<b||b+c<a)){
            cout << "ぃΘミà" << endl;
            system("pause");
        }

        else if(a==b&&a==c){
            cout << "タà" << endl;
            system("pause");
        }

        else if(a==b||b==c||a==c)check = true;

        else if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a){
            if(check){
                cout << "单竬秝àà"<< endl;
                system("pause");
            }
            else{
                cout << "獶单竬秝àà"<< endl;
                system("pause");
            }
        }
        else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            if(check){
                cout << "单竬àà"<< endl;
                system("pause");
            }
            else{
                cout << "獶单竬àà"<< endl;
                system("pause");
            }
        }
        
        else if(check){
                cout << "单竬綰àà"<< endl;
                system("pause");
        }
        else{
                cout << "獶单竬綰àà"<< endl;
                system("pause");
        }

        cout << endl;
    }    
}