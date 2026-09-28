#include "bookStore.h"

namespace LeeJuha2630018
{
   bool compareBook(const book &b1, const book& b2)
   {
       return b1.getID() == b2.getID() && b1.getPrice() == b2.getPrice();
   } 
}

int main()
{ 
    using namespace LeeJuha2630018;
    bookStore bs1;bs1.print();
    bookStore bs2{book{121, 0}, true}; bs2.print();
    
    if (compareBook(bs1.getBook(), bs2.getBook()))
       std::cout << "same\n";
    else 
       std::cout << "not same\n";



//bookStore 객체1 선언, print함수 호출
//bookStore 객체2 초기값을 넣어서 선언, print함수 호출
//비멤버함수 compareBook을 호출하여 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력
 return 0;
}