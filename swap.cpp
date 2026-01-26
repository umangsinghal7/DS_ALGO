#include<iostream>


   void swap(int x,int y){
    x =x+y;
    y =x-y;                                         //without using third variable//
    x =x-y; 
    std::cout<<"after swapping"<<" "<<x<<" "<<y<<std::endl;
   }

       void swap2(int x, int y){
    int temp = 0;
    temp = x ;                               //using third variable temp//
    x = y ;
    y= temp;
    std::cout<<"after swapping"<<" "<<x<<" "<<y<<std::endl;
}

int main(){
    int x =9;
    int y =8;
    std::cout<<"before swapping "<<x<<" "<<y<<"  "<<std::endl;
    swap(x,y);
    swap2(x,y);
    return 0;


//     we need to assign value of one to another



}
