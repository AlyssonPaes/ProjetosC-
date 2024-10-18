#include "SalesScore.h"
#include "numberCalc.h"
#include <stdio.h>

//===================================================================================
// -- Função principal --
int main() //inicio da funcao principal
{
   SalesScore mySales("Alysson Programas! ");

    mySales.bootSystem();
//    mySales.calcSalesAvarege();
    mySales.enterProducts();
    mySales.reportProducts();

    while(1);
    return 0;
}//fim da funcao principal
