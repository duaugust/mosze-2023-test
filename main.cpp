#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];						//typo in N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl;//missing ;
    for (int i = 0; i < N_ELEMENTS; i++)				//missing statements
    {
        b[i] = (i+1) * 2;								//should be (i+1)
    }
    for (int i = 0; i < N_ELEMENTS; i++)				//missing statement
    {
        std::cout << "Ertek:" << b[i] <<std::endl;		//no i output
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    float atlag;										//should be float instead of int
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Johnny was here";                     //Edited by johncodesalot
    return 0;
}
