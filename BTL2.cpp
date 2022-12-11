#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
/******************************************************************************
 * Support Functions: these functions below are optional. If you want your code
					  to be clearer, you can implement them. However if you
					  dont know how to use funtion in programming, dont worry, 
					  you dont have to implement them, and you just add a comment 
					  in each of them.
*******************************************************************************/
//Convert character to number



int move(string moves)
{
    /*TODO: add your code here*/
    int x=0, y=0;
    
    
    for(int i = 0; i < moves.length(); i++){
    	switch (moves[i]){
			case 'U':  
				{
				char digit=moves[i+1];
				int b = (int)digit - '0';
				y = y + b;
				break;
				}
			case 'D': 
				{
				char digit=moves[i+1];
				int b = (int)digit - '0';
				y = y - b;;
				break;
				}
			case 'L': 
				{
				char digit=moves[i+1];
				int b = (int)digit - '0';
				x = x - b;;
				break;}
			case 'R': 
				{
				char digit=moves[i+1];
				int b = (int)digit - '0';
				x = x + b;
				break;}
			default: continue;}		
	}
	
	
	
	return round(sqrt(x*x+y*y));
}

bool isPrime(int n)
{
    /*TODO: add your code here*/
    
	if (n<2) return 0;
	else if (n > 2){
				for (int i = 2; i<=n/2; i++){
						if (n%i == 0) return 0;}
	} 
	else return 1;
}

bool isSquared(int n)
{
    /*TODO: add your code here*/
    for (int i = 0; i<=sqrt(n*1.0); i++){
						if (i == sqrt(n*1.0)) return 1;}
		return 0;

}

int main()
{
    string moves;
   
    int distance;
    bool primality, squared;
	
    /// =======================================================
    /*
        The following code initializes variable `moves`
    */
    /// BEGIN   TESTCASE
    cin >> moves;
    /// END     TESTCASE

    /*---------------------------------
        * Calculate the distance
        * Remember to assign calculated value to variable `distance`
	*/
    /*TODO: add your code here*/
    distance = move(moves);

    /*---------------------------------*/
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
        << distance << '\n';


    /*---------------------------------
        * Check if distance is prime
        * Remember to assign appropriate value to variable `primality`
	*/
    /*TODO: add your code here*/
    primality = isPrime(distance);
    

    /*---------------------------------*/

    /*---------------------------------
        * Check if distance is squared
        * Remember to assign appropriate value to variable `squared`
	*/
    /*TODO: add your code here*/
	squared = isSquared(distance);
    

    /*---------------------------------*/

    if (primality) {
        cout << "So " << distance << " la so nguyen to\n";
    }
    if (squared) {
        cout << "So " << distance << " la so chinh phuong\n";
    }

    return 0;
}

