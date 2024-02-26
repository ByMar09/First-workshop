#include<iostream>

int menu()
{
    int selection;
    std::cout<<":::::::::::::::Bienvenido a la calculadora:::::::::::::::"<<std::endl;
    std::cout<<"\t1. Suma \n\t2. Resta \n\t3. Multiplicación   \n\t4. División \n\t5. Módulo"<<std::endl;
    std::cin>>selection;
    system("clear");
    return selection; 
}

double read(double num){
    double num;
    std::cout<<"Ingrese un número"<<std::endl;
    std::cin>>num;
    return(num);
}

double suma(double num1, double num2){
    return(num1+num2);
}

double resta(double num1, double num2){
    return(num1-num2);
}

double mult(double num1, double num2){
    return(num1*num2);
}

double div(double num1, double num2){
    return(num1/num2);
}

double mod(double num1, double num2){
    return(num1%num2);
}

int main(){
    double x,y;
    x=read();
    y=read();
    switch(menu())
    {
        case 1:
            std::cout<<"El resultado de la suma es: "<<suma(x,y)<<std::endl;
        break;
        case 2:
            std::cout<<"El resultado de la resta es: "<<resta(x,y)<<std::endl;
        break;
        case 3:
            std::cout<<"El resultado de la multiplicación es: "<<mult(x,y)<<std::endl;
        break;
        case 4:
            std::cout<<"El resultado de la divión es: "<<div(x,y)<<std::endl;
        break;
        case 5:
            std::cout<<"El módulo es: "<<mod(x,y)<<std::endl;
        break;
        default:
            std::cout<<"Opción inválida"<<std::endl;
        break;
    }

    return 0;
}