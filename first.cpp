// extract to string
#include <iostream>
#include <string>
#include<exception>
using namespace std;
int main ()
{
  std::string haystack;
  std::string needle;
try{
   
  std::cout << "Please, enter haystack= ";
  std::getline (std::cin,haystack);
  }catch(exception e){
     std::cout<<"[1]out of bound!"<<"!\n";
}
try{
  std::cout << "Please, enter needle: ";
  std::getline (std::cin,needle);
  }catch(exception &e){
    std::cout<<"[2]out of bound!"<<"!\n";
}
  int index = haystack.find_first_of(needle);
  if(index < haystack.length())
      std::cout <<"The index of the first occurrence of "<<needle<<" in "<<haystack<<" is "<<index<<"!\n";
     
  else if (needle=="")
      std::cout <<"The index of the first occurrence of "<<needle<<" in "<<haystack<<" is "<<" 0 "<<"!\n";
  else
      std::cout <<"The index of the first occurrence of "<<needle<<" in "<<haystack<<" is "<<" -1 "<<"!\n";
  return 0;
}
#mygit
# mygit
# mygit
# mygit
# mygit
