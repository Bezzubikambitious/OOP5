#include "money.h"

Money::Money(){

}

Money::Money(int ndolar,int ncent){
        dolar=ndolar;
        cent=ncent;
}


void Money::SetDolar(int dolar1){
        dolar=dolar1;
}
void Money::SetCent(int cent1){
        cent=cent1;
}


int Money::GetDolar() const{
      return dolar;
}
int Money::GetCent() const{
      return cent;
}


Money Money::addMoney(Money m2){
      int dolar=this->dolar+m2.dolar;
      int cent=this->cent+m2.cent;
      Money m3(dolar,cent);
      return m3;
}
Money Money::subMoney(Money m2){
      int dolar=this->dolar-m2.dolar;
      int cent=this->cent-m2.cent;
      Money m3(dolar,cent);
      return m3;
}

std::string Money::get_res()
{
    return std::to_string(this->dolar) + "," + std::to_string(this->cent);
}
