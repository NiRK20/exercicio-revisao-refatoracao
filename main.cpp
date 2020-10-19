#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro* eng1 = new Engenheiro("Joao Snow", 35, 9.5, 3);
  eng1->getEng();
  std::cout << std::endl;

  Engenheiro* eng2 = new Engenheiro("Daniela Targaryen", 30, 8, 1);
  eng2->getEng();
  std::cout << std::endl;
  
  Engenheiro* eng3 = new Engenheiro("Bruno Stark", 30, 8, 2);
  eng3->getEng();
  std::cout << std::endl;
  
  Vendedor* vend1 = new Vendedor("Tonho Lannister", 20, 6, 5000);
  vend1->getVend();
  std::cout << std::endl;
  
  Vendedor* vend2 = new Vendedor("Jose Mormont", 25, 8, 3000);
  vend2->getVend();
  std::cout << std::endl;
	
  Vendedor* vend3 = new Vendedor("Sonia Stark", 30, 8, 4000);
  vend3->getVend();
  
  delete eng1;
  delete eng2;
  delete eng3;
  delete vend1;
  delete vend2;
  delete vend3;

  return 0;	
}
