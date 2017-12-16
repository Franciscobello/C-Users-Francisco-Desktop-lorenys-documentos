#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    float cuotas, interes, pago_por_cuota, prestamo;
    cout << "Ingrese el valor de prestamo: ";
    cin >> prestamo;
    cuotas=3;
    if(prestamo>5000)
        cuotas=5;
    if(prestamo<1000)
        cuotas=1;
    if(prestamo>=1000&&prestamo<=3000)
        cuotas=2;
    interes=prestamo<4000?prestamo*0.1:prestamo*0.12;
    pago_por_cuota=(prestamo+interes)/cuotas;
    cout << "Valor de cuotas: " << cuotas << endl;
    cout << "Valor de interes: " << interes << endl;
    cout << "Valor de pago por cuota: " << pago_por_cuota << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
