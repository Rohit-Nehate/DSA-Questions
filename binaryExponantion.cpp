#include<iostream>
using namespace std;

// function to  calcukate  power with binary expoonantial 

double exponantial(double x, int n)
{
 long bin = n;
 double ans = 1;



// handels -ve power 
 if(bin < 0){    
    x = 1/x;
    bin = -bin;
 }


 //loop to claculate the power 
 while(bin>0){  
    if(bin%2==1){
        ans *=x;
    }

    x*=x;
    bin/=2;
 }
   
return ans;

}


// main function
int main(){
    double x =3;
    int n=-4;
    cout<<exponantial(x,n);
}