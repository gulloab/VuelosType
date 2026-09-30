#ifndef VUELO_CARGA_H_INCLUDED
#define VUELO_CARGA_H_INCLUDED
class vuelos_carga:  public vuelo{
private:
  float peso_maximo_soportado;
protected:
public:
  void set_Id(int);
  vuelos_carga(float,int=1000,string="ND");
};///___________________________________________________________________
#endif // VUELO_CARGA_H_INCLUDED
