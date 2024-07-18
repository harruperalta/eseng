#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<windows.h>




int main(){
  
  std::string name;
  int age;
  std::string food;
  int y;

  std::cout<<"Enter the name: ";
  std::cin>>name;

  std::cout<<"Enter your age: ";
  std::cin>>age;

  std::cout<<"Enter your food: ";
  std::cin>>food;

  std::cout<<"choose a number to(1-10)only : ";
  std::cin>>y;
  

  std::cout<<"Hello "<<name<<'\n';
  std::cout<<"you are "<<age<<" years old\n";
  std::cout<<"your food is: "<<food<<'\n';

 

  switch(y){
     case 1:
     std::cout<<"I MISS YOU CRUSH"<<'\n';
      break;
     case 2:
     std::cout<<"I LOVE YOU CRUSH"<<'\n';
      break;
     case 3:
     std::cout<<"I LIKE YOU "<<'\n';
      break;
     case 4:
     std::cout<<"I LIKE YOUR EYES"<<'\n';
      break;
     case 5:
     std::cout<<"I LIKE YOUR HAIR"<<'\n';
      break;
     case 6:
     std::cout<<"I LIKE A GOOD GIRL"<<'\n';
      break;
     case 7:
     std::cout<<"I will never get tired of loving you."<<'\n';
      break;
     case 8:
     std::cout<<"I HOPE YOU GOOD CONDITION"<<'\n'; 
      break;
     case 9:
     std::cout<<"YOU SHOULD EAT EVERYDAY!!"<<'\n';
      break;
     case 10:
     std::cout<<"NO MATTER WHAT I ALWAYS LOVE YOU"<<'\n';
      break;
  default:
    std::cout<<"please enter the following instruction bellow\n";
    break;
  }

  std::cout<<"**************THANK YOU SO MUCH*************************\n";
  
 
  
  return 0;
}