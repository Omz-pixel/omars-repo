#include<iostream>
#include<conio.h>
using namespace std;


bool isPrime(int prime){
    int i=2;
    for(i; i<=prime/2; i++){
        if(prime%i==0){
            return false;
        }
    }
    return true;
}


int even(int a,int b){
    int c=3;

    for(int i=a; i<=b; i++){
        if(i%2==0){
            c=i;
        }
    }

    if(c==3){
        cout<<"No even number found!"<<endl;
        system("pause");
        system("cls");
        return -1;
    }

    return c;
}

int odd(int a,int b){
    int c=2;
    
    for(int i=a; i<=b; i++){
        if(i%2!=0){
            c=i;
        }
    }

    if(c==2){
        cout<<"No odd number found!"<<endl;
        system("pause");
        system("cls");
        return -1;
    }

    return c;
}

int prime(int a,int b){
    int c=10;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            c=i;
        }
    }

    if(c==10){
        cout<<"No prime number found!"<<endl;
        system("pause");
        system("cls");
        return -1;
    }

    return c;
}

int main(){
    for (int i=0; i>-1; i++)
    {
        cout<<"Choose one of the following: \n"
            <<"\t0. Leave.\n"
            <<"\t1. Choose even numbers.\n"
            <<"\t2. Choose odd numbers.\n"
            <<"\t3. Choose prime numbers."<<endl;
        int a,b,choice=getche();
        switch(choice){
            case '0':
                exit(0);
            case '1':
                cout<<"\nRange from: ";
                cin>>a;
                cout<<"To: ";
                cin>>b;
                cout<<endl<<endl<<"Highest is: "<<even(a,b)<<endl<<endl;
                break;
            case '2':
                cout<<"\nRange from: ";
                cin>>a;
                cout<<"To: ";
                cin>>b;
                cout<<endl<<endl<<"Highest is: "<<odd(a,b)<<endl<<endl;
                break;
            case '3':
                cout<<"\nRange from: ";
                cin>>a;
                cout<<"To: ";
                cin>>b;
                cout<<endl<<endl<<"Highest is: "<<prime(a,b)<<endl<<endl;
                break;
            default:
                cout<<"\nInvalid choice. Be serious!!"<<endl<<endl;
        }
        system("pause");
        system("cls");
    }
    
    return 0;
}