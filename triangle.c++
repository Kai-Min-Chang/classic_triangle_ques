#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    double a,b,c;
    bool check;

    while(1){
        check=false;
        cout << "�п�J�T�ӼƦr:" << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        

        if((a<=0||b<=0||c<=0)||(a+b<c||a+c<b||b+c<a)){
            cout << "�����ߤT����" << endl;
            system("pause");
        }

        else if(a==b&&a==c){
            cout << "���T����" << endl;
            system("pause");
        }

        else if(a==b||b==c||a==c)check = true;

        else if(a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a){
            if(check){
                cout << "���y�w���T����"<< endl;
                system("pause");
            }
            else{
                cout << "�D���y�w���T����"<< endl;
                system("pause");
            }
        }
        else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            if(check){
                cout << "���y�����T����"<< endl;
                system("pause");
            }
            else{
                cout << "�D���y�����T����"<< endl;
                system("pause");
            }
        }
        
        else if(check){
                cout << "���y�U���T����"<< endl;
                system("pause");
        }
        else{
                cout << "�D���y�U���T����"<< endl;
                system("pause");
        }

        cout << endl;
    }    
}