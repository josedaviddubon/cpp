#include   <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota == 100)
    {
        cout << "Obtuviste una S(A++)";
    }
    else
    {
    if (nota >= 95 && nota <= 91)
       {
          cout << "Obtuviste una A+";
       } 
    else
    {
        if (nota >= 90 && nota <= 86)
            {
                cout << "Obtuviste una A";
            }
            else
            {
                if (nota >= 85 && nota <= 81)
                    {
                        cout << "Obtuviste una A-";
                    }
                else 
                {
                if (nota >= 80 && nota <= 76)
                    {
                            cout << "Obtuviste una B+";
                    }
                    else 
                    {
                    if (nota >= 75 && nota <= 71)
                        {
                            cout << "Obtuviste una B";
                        }
                    else
                    {
                        if (nota >= 70 && nota <= 66)
                    {
                       cout << "Obtuviste una B-";
                    }
                        else
                        {
                            if (nota >= 65 && nota <= 61)
                            {
                            cout << "Obtuviste una C+";
                            }
                            else
                                {
                                    if (nota >= 60 && nota <= 56)
                                    {
                                        cout << "Obtuviste una C";
                                    } 
                                    else
                                        {
                                    if (nota >= 55 && nota <= 51)
                                        {
                                            cout << "Obtuviste una C-";
                                        }
                                        else
                                        {
                                            
                                        if (nota >= 50 && nota <= 46)
                                            {
                                              cout << "Obtuviste una D+";
                                            }  
                                        else
                                        {
                                             if (nota >= 45 && nota <= 41)
                                                {
                                             cout << "Obtuviste una D";
                                                } 
                                            else
                                            {
                                                
                                             if (nota >= 40 && nota <= 36)
                                                        {
                                                            cout << "Obtuviste una D-";
                                                        }
                                            else
                                            {
                                                
                                            if (nota >= 35 && nota <= 31)
                                                    {
                                                        cout << "Obtuviste una E+";
                                                    }
                                            else 
                                            {
                                                
                                            if (nota >= 35 && nota <= 31)
                                                {
                                                    cout << "Obtuviste una E";
                                                }
                                            else{
                                                
                                            if (nota >= 30 && nota <= 26)
                                                {
                                                    cout << "Obtuviste una E-";
                                                }
                                            else{
                                                
                                            if (nota >= 25 && nota <= 21)
                                            {
                                                cout << "Obtuviste una F+";
                                            } 
                                            else
                                            {
                                                
                                            if (nota >= 20 && nota <= 16)
                                            {
                                                cout << "Obtuviste una F";
                                            }
                                            else
                                            {
                                                
                                            if (nota >= 15 && nota <= 11)
                                            {
                                                cout << "Obtuviste una F";
                                            }
                                        else
                                        {
                                            
                                        if (nota >= 10 && nota <= 6)
                                        {
                                            cout << "Obtuviste una F-";
                                        }
                                        else
                                        {
                                            
                                        if (nota >= 5 && nota <= 0)
                                        {
                                            cout << "Obtuviste una F--";
                                        }    
                                        else
                                        {
                                            cout << "Ingrese una nota entre 0 - 1000";
                                        }
                                    }
                                }
                            } 
                        }
                    }
                    }
                }
                                            }
                                            }    
            }
                                        }
                                        }
                                }
                     
                        }           
                    }                   
                }

            }

        }
    }
}

    return 0;
}
