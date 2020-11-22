#include "rccregisters.hpp"
#include "gpiocregisters.hpp"
#include "gpioaregisters.hpp"
#include <iostream>

int main()
{
    STK
    RCC::AHB1ENR::GPIOCEN::Enable::Set();
   
    GPIOC::MODER::MODER5::Output::Set();
  
  for(;;)
      {
     GPIOC::BSRR::BS5::High::Write();
     for(int i = 0; i<100'000; ++i)
     {
       
     }
     GPIOC::BSRR::BS5::High::Write();
     for(int i = 0; i<100'000; ++i)
     {
     }    
    
   }
   return 1;
}
