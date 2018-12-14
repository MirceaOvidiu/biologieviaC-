#include<iostream>
#include<math.h>
using namespace std;

int main(){
int dorinta;
cout<<"fueled by Dodi Mircea & Carabat Radu"<<endl;
cout<<"teoretic acest program ar trebui sa rezolve toate problemele ce tin de mitoza si meioza, pornind de la numarul de cromozomi ai unei celule"<<endl;
cout<<"daca ai doar mitoze apasa 1;    daca ai o mitoza apasa 2;      daca ai niste mitoze si o meioza apasa 3 ____";//meioze si mitoze, apasa 4
cin>>dorinta;
int nrmame, nrfiice;
int cromomama;//cromo-cromozomi, cromat-cromatide
int cromatmama;
int cromofiica;
int cromofiicetotal;
int cromatfiica;
int cromatfiicetotal;
int nrmitoze;
int nrmeioze;
int cromoPFMF;//P-pro, m-meta, a-ana, t-telo, f-faza
int cromoAFTF;
int cromoPF1MP1;
int cromoAF1TF1;
int cromoPF2MF2;
int cromoAF2TF2;///variabilele ce reprezinta cromatide sunt destul de inutile(in mare), pentru ca le exprimam dupa numarul de cromozomi si tipul lor

if(dorinta==1 || dorinta==2){
cout<<"nr. cromozomi mama a.k.a 2n=";
cin>>cromomama;
if(dorinta==1)
{
            cout<<"cate celule mame?";
            cin>>nrmame;
            cout<<"cate mitoze?"; cin>>nrmitoze;
            nrfiice=pow(2, nrmitoze);
            nrfiice=nrfiice*nrmame;
            cout<<"la final o sa avem atatea celule fiice:"<<nrfiice<<endl;
            cromofiicetotal=pow(2,nrmitoze);///baza, exponent
            cromofiicetotal=cromofiicetotal*cromomama*nrmame;
            cout<<"nr.total cromozomi MONOcromatidici la final="<<cromofiicetotal<<"  "<<endl;
            cromoPFMF=cromomama;
            cromoAFTF=2*cromoPFMF;
            cout<<"cromozomi (per celula) in profaza si metafaza, BIcromatidici="<<cromoPFMF<<"  "<<endl;
            cout<<"cromozomi (per celula) in anafaza si telofaza, MONOcromatidici="<<cromoAFTF<<" "<<endl;
            int imparteala;
            imparteala=pow(2,nrmitoze);
            cromatfiica=cromatfiicetotal/imparteala;///c++ are o logica ce presupune doar implicatia simpla, nu dubla(in aceste egalitati)

        }
if(dorinta==2)
    {
cout<<"cate meioze?(una)";cin>>nrmeioze;
       ///calcule pentru primul set de faze
       cout<<"PRIMA FAZA:"<<endl;
        cromofiicetotal=cromomama;
        cromofiica=cromomama/2;
        cromatmama=cromomama*4;
        cout<<"mama are aici cromozomi "<<cromomama<<" TETRAcromatidici (cati  in PF1/MF1) adica are atatea cromatide:"<<cromatmama<<endl;
        cout<< " deci in AF1/TF1 sunt atatia cromozomi BIcromatidici "<<cromatmama/2<<endl;
        ///calcule pentru al doilea set de faze - se dubleaza cantitatea de ADN
        ///ne raportam la o celula si inmultim la final
        cout<<"A DOUA FAZA:"<<endl;
        cout<<"(per celula) n cromozomi adica:"<<cromofiica<<endl;
        cout<<"care au atatea cromatide"<<cromofiica*2<<endl;
        cout<<"numar cromozomi BIcromatidici per celula="<<cromomama/2<<endl;
        cout<<"adica nr. cromatide per celula fiica="<<cromofiica*2<<endl;
        cout<<"nr.total cromozomi la final, dupa o meioza:"<<cromofiicetotal*2<<"  "<<endl;
            }
        }
if(dorinta==3)
    {
        cout<<"nu este gata inca, dar puteti folosi  programul de 2 ori apasand 1 si 2 la inceput"<<endl;
        cout<<"se preiau valorile de la 1 si se continua in 2";
            }
return 0;}
