#include <iostream>

using namespace std;

int main()
{
    int a,A,B,C;
    float D;
    short int b;
    short int c;
    char j=80;
    unsigned long long fact=1;

    while (true) {

     cout << "Ingrese 1 si desea ejecutar un ejercicio, 2 si desea ejecutar un problema u otro numero para salir:";
     cin >> b;
      switch (b){
       case 1:
        cout << "Ingrese el numero del ejercicio a ejecutar:";
        cin >> a;
        switch(a){
        case 1:
            cout <<"Ingrese dos numeros enteros para hallar el residuo de la division entre ellos" << endl;
            cin >> A;
            cin >> B;
            C=A%B;
            cout << "El residuo de la division "<< A << "/" << B << " es: " << C <<endl;

        break;
        case 2:

        break;
        case 3:
            cout <<"Ingrese dos numeros enteros" << endl;
            cin >> A;
            cin >> B;
            if (A>B) cout <<"El mayor es: " << A << endl;
            else if (B>A) cout <<"El mayor es: " << B << endl;

        break;
        case 4:

        break;
        case 5:
            cout <<"Ingrese dos numeros enteros para hallar la division entre ellos" << endl;
            cin >> A;
            cin >> B;
            D=A/B;
            cout << A << "/" << B << " = " << D <<endl;

        break;
        case 6:

        break;
        case 7:

        break;
        case 8:
          cout << "Ingrese el numero a encontrarle el factorial: ";
          cin >> a;
           for(int i=a;i>=2;i=i-1){
            fact=fact*i;
           }
            cout << a << "!=" << fact << endl;
            break;

         case 9:

          break;
          case 10:

          break;

               default:
           cout << "El dato ingresado no corresponde a un ejercicio" << endl;
                       break;
                    }


      break;
      case 2:
       cout << "Ingrese el numero del problema a ejecutar:";
       cin >> c;
       switch(c){
        case 1:
             cout << "ingrese el caracter: ";
             cin >> j;
             a=int(j);
             if((a>=65 && a<=90)||(a>=97 && a<=122)){
             if(a==65 || a==69 || a==73 || a==79 || a==85) cout << j << " es una vocal mayuscula" << endl;
             else if(a==97 || a==101 || a==105 || a==111 || a==117) cout << j << " es una vocal minuscula" << endl;
             else cout << j << " es una consonante" << endl;
                             }

             else cout << "No es una letra" << endl;


        break;

        case 2:


        break;

       default:
           cout << "El dato ingresado no corresponde a un problema" << endl;
           break;

       }


      break;

      default:
          cout << "Hasta la proxima" << endl;
          break;

      }
    }

                return 0;
}
