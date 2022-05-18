#include <bits/stdc++.h>
using namespace std;
class Statie
{
protected:
    int strada, numar, sector;
    int mij_transport[1001];
    string cod_statie;
    string nume_statie;
public:
    Statie(int _strada  = 0, int _numar = 0, int _sector = 0, int _mij_transport[] = 0, string _cod_statie ="", string _nume_statie="") :
    strada(_strada), numar(_numar), sector(_sector), cod_statie(_cod_statie),nume_statie(_nume_statie){}
    Statie(const Statie &ob)
    {
        strada = ob.strada;
        numar = ob.numar;
        sector = ob.sector;
        cod_statie = ob.cod_statie;
        nume_statie = ob.nume_statie;
    }
    int get_Data() const
    {
        return strada;
        return numar;
        return sector;
    }
    Statie& operator = (const Statie &ob)
    {
        strada = ob.strada;
        numar = ob.numar;
        sector = ob.sector;
        cod_statie = ob.cod_statie;
        nume_statie = ob.nume_statie;
        return *this;
    }
    virtual ~Statie(){};
    virtual void citire(istream&);
    virtual void afisare(ostream&);
//    Statie& operator=(const Statie &ob)
//    {
//        strada = ob.strada;
//        numar = ob.numar;
//        sector = ob.sector;
//        cod_statie = ob.cod_statie;
//        nume_statie = ob.nume_statie;
//    }
    friend istream& operator >>(istream &in, Statie &ob)
    {
        cout<<"Strada are numarul"<<endl;
        in>>ob.numar;
        cout<<"Sectorul unde este punctul de informare este"<<endl;
        in>>ob.sector;
        return in;
    }
    friend ostream& operator <<(ostream &out, Statie &ob)
    {
        out<<endl;
        if(ob.numar == 1 and ob.sector  == 1)
        {
            out<<"Statia este urbana"<<endl;
        }
        if(ob.numar == 2 and ob.sector == 2)
        {
            out<<"Statia este extraurbana"<<endl;
        }
        if(ob.numar == 1 and ob.sector == 2)
        {
            out<<"Statia este extraurbana"<<endl;
        }
        if(ob.numar == 2 and ob.sector == 1)
        {
            out<<"Statia este urbana"<<endl;
        }
        return out;
    }
};
class Extraurbana : public Statie
{
protected:
    int pret;
    string cod_asociat;
    int plus;
private:
    Extraurbana():Statie()
    {
        this->pret = 0;
        this->cod_asociat = "";
        this->plus = 0;
    }
    Extraurbana(const Statie &ob, int pret, string cod_asociat, int plus)
    {
        this->plus = plus;
        this->cod_asociat = cod_asociat;

    }
};
int main() {
    return 0;
}