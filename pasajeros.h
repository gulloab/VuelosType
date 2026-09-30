#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED
class pasajero{
private:
    string nombre;
    long int ID;
    string nacionalidad;

public:
    bool setNombre(string);
    void setID(long int);
    bool setNat(string);
    string getNombre(void);
    long int getID(void);
    string getNat(void);
};///___________________________________________________________________


#endif // PASAJEROS_H_INCLUDED
