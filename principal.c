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

