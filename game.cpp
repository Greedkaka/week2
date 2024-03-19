#include <iostream>
#include <string>

std::string Ans();
std::string Scan();

void Game(){
    std::string num1,num2;
    int Stri=0,Ball=0;
    num1=Ans();
    std::cout<<"Answer is "<<num1<<std::endl;

    while(true){
        std::cout<<"Enter a guess: ";
        num2=Scan();
        Stri=0;
        Ball=0;

        for(int y=0; y<3; y++){
            for(int x=0; x<3; x++){
                if(num2[y]==num1[x]){
                    if(y==x){
                        Stri++;
                        break;
                    }
                    Ball++;
                }
            }
        }
        if(Stri==3){
            std::cout<<"You Win!"<<std::endl;
            break;
        }
        std::cout<<"Strikes: "<<Stri<<", Balls: "<<Ball<<std::endl;
    }
}