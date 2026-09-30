#ifndef VUELO_H_INCLUDED
#define VUELO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class vuelo{
private:
  string nombre_del_vuelo;

protected:
  int numero_de_vuelo;
  void setFlyName(string Name)
  {
    nombre_del_vuelo=Name;
  }//_______________________

public:
  vuelo()
  {
    numero_de_vuelo=1000;
    setFlyName("ND");
  }//_________________________________

  int get_Id(void)
  {
    return numero_de_vuelo;
  }//_________________________________
};///___________________________________________________________________

#endif // VUELO_H_INCLUDED
