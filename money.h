#ifndef MONEY_H
#define MONEY_H
#include <string>
class Money{
   private:
   int dolar, cent;

   public:
   Money();
   Money(int dolar,int cent);


   void SetDolar(int dolar);
   int GetDolar() const ;
   void SetCent(int cent);
   int GetCent() const;
   std::string get_res();

   Money addMoney(Money m2);
   Money subMoney(Money m2);

};
//---------------------------------------------------------------------------

#endif // MONEY_H
