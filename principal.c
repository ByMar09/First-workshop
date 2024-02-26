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
