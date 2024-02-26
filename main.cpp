#include <iostream>


using namespace std;


const int dimensioneMax=10;

//prototipi
void caricaVettore(int v[], int &n);
void stampaVettore(int v[], int n);
void calcolaSomma(int n,int &sp, int &sd, int v[]);
int Menu();




int main() {

    int N=0;
    int scelta;
    int vettore[dimensioneMax];
    int spari, sdispari;

     do{
      scelta=Menu();
      switch(scelta){
        case 1:
          caricaVettore(vettore,N);
          break;
        case 2:
          stampaVettore(vettore,N);
          break;
        case 3:
          calcolaSomma(N,spari,sdispari,vettore);
          cout<<"La somma dei numeri negli indici pari e' "<<spari<<endl;
          cout<<"La somma dei numeri negli indici dispari e' "<<sdispari<<endl;
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);

    return 0;
}

int Menu () {
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci il numero di elementi"<<endl;
  cout<<"2-Visualizza il vettore"<<endl;
  cout<<"3-Somma numeri negli indici pari e negli indici dispari"<<endl;
  cout<<"0-Fine"<<endl;

  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}



void caricaVettore(int v[], int &n) {

    int i=0;

    do{
    cout<<"Inserisci il numero di elementi: ";
    cin>>n;
    if (n<=0||n>dimensioneMax) {
      cout<<"Attenzione, non posso caricare il vettore!!!"<<endl;
    }
  }while(n<=0||n>dimensioneMax);

    while(i<n) {
    cout<<"Inserisci il "<<i+1<<"° elemento: ";
    cin>>v[i];
    i++;
  }

    cout<<endl;



}


void stampaVettore(int v[], int n) {


    int i=0;

    cout<<endl;


    cout<<"Gli elementi del tuo vettore sono: "<<endl;
    while(i<n) {
        cout<<v[i]<<endl;
        i++;
    }

    cout<<endl;


}


void calcolaSomma(int n,int &sp, int &sd, int v[]) {

    int i=0;

    while(i<dimensioneMax) {
        if(i%2==0) {
            sp=sp+v[i];
        } else {
            sd=sd+v[i];
        }
        i++;
    }


}
