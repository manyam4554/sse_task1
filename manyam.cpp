#include<iostream>
#include<string>
using namespace std;
void check_vote(int n){
    if(n>=18){
        cout<<"you are elgible to vote";
    }
    else{cout<< "you are not eligible to vote now";
    }
    return ;
}
void check_score(int n){
    if(n>=90 && n<=100){
        cout<< "A";
    }
    else if (n>=80 && n<90){
        cout<< "B";
    }
    else if(n>=60 && n<= 80){
        cout<< "C";
    }
    else if(n>=30 && n<=60){
        cout << "D";
    }
    else if(n>= 0&&n<=30){
        cout<< "E";
    }
    else{cout << "enter vaild number";}
    return;
}
void str_indexing(string str){
    // remove vowels from the string entered 
    string str_1;
    for(int i = 0; i< str.size();i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] =='i' || str[i] =='o' || str[i] =='u' ){
            continue;
        }
        else{str_1 += str[i];
    }
    cout << str_1 << endl;
}}
