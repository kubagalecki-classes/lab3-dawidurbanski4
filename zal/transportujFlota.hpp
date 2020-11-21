#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
 int liczba_zaglowcow = 0;

    if(towar == 0){
      return 0;
    }else{
      int ilosc_towaru =0;

      while (ilosc_towaru < towar){
        Stocznia stocznia{};
        Statek* s1 = stocznia();
        ilosctowaru = ilosc_towaru + s1->transportuj();

        if (s1 == dynamic_cast<Zaglowiec*>(s1)){
          liczba_zaglowcow++;
        }
        delete s1;
      }
      return liczba_zaglowcow;
    }
}