#include<iostream>
using namespace std;
int eval_postfix(string expr){
    int len= sizeof(expr);
    cout<<len;
    for(int i = 0 ; i<len; i++){
        if(expr[i]==)
    }
}


int main(){
    string expr;
    cout<<"Enter the expression: ";
    cin>>expr;
    int result = eval_postfix(expr);
    cout<<"The result after evaluation is : "<<result;

    return 0;
}