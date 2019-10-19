#include <iostream>
#include <stdlib.h>
using namespace std;

///this is a function
int exitP(int x){

    cout<<"\nWould you like to exit the program? [1 -> yes :: 2 -> no]: " ;
    cin>>x;

///this is a switch
    switch(x){
    case 1: cout<<"Goodbye!";
            exit(EXIT_SUCCESS);
            break;
    case 2: return x;
            break;
    default: cout<<"Pls enter numbers 1-2 only. ";
             exitP(x);
             break;
    }

}

int count(int x, int pay){
    x = x - pay;
    if(x>=50000 | x<=50000){
        x = x-50000;
        cout << "Kembalian 1x 50000 Rupiah" << "\n";
        if(x>=20000){
            x = x - 20000;
            if(x>=20000){
                x = x -20000;
                cout << x << "Kembalian 2x 20000 Rupiah\n";
            }else{
                cout << "Kembalian 1x 20000 Rupiah" << "\n";
                if(x>=10000){
                x= x - 10000;
                cout << "Kembalian 1x 10000 Rupiah " << "\n";
                if(x>=5000){
                    x=x-5000;
                    cout << "Kembalian 1x 5000 Rupiah\n";
                    if(x>0){
                        cout << x << " Disumbangkan\n";
                    }
                }else{
                    cout << x << " Disumbangkan\n";
                }
            }else{
                cout << x << " Disumbangkan\n";
            }
            }
                
            }else if(x>=10000){
                x= x - 10000;
                cout << "Kembalian 1x 10000 Rupiah " << "\n";
                if(x>=5000){
                    x=x-5000;
                    cout << "Kembalian 1x 5000 Rupiah\n";
                }else{
                    cout << x << " Disumbangkan\n";
                }
            }else{
                cout << x << " Disumbangkan\n";
            }
        }else{
            cout << x << " Disumbangkan\n";
        }
    /*}else{
        cout << x << "Disumbangkan\n";
    }*/
}

int main()
{
    double product1 = 110500;
    double customerMoney = 0.00;
    int exitProgram = 1;
    
    cout << "Berapa banyak uang Anda? ";
	cin >> customerMoney;
	
	while (customerMoney >= 59.99 && exitProgram == 1)
	{
		int customerChoice = 0;

		cout << "Barang apa yang ingin anda beli?\n Enter '1' for Minuman mineral fermentasi (Rp110.000)"
		<<"\n\nChoice: ";
		cin >> customerChoice;
		if (customerChoice == 1)
		{
			cout << "Kamu membeli Minuman fermentasi\n";
			
			count(customerMoney, product1);
                        
                       ///this is what a function is used for
			exitP(exitProgram);
		}

	}
}