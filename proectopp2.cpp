

#include <iostream>

using namespace std;
class Fraction {
private:
    int num1;   
    int num2;

public:
    
    Fraction(int num = 0, int den = 1) : num1(num), num2(den) {}

   
    void setFraction(int num, int den) {
        num1 = num;
        num2 = den;
    }

 
    Fraction add(const Fraction& numbers)  {
        int num = num1 * numbers.num2 + numbers.num1 * num2;
        int den = num2* numbers.num2;
        return Fraction(num, den);
    }
  
    Fraction dill(const Fraction& numbers)  {
        int num = num1 * numbers.num2- numbers.num1 * num2;
        int den = num2 * numbers.num2;
        return Fraction(num, den);
    }


    Fraction mn(const Fraction& numbers)  {
        int num = num1 * numbers.num1;
        int den = num2 * numbers.num2;
        return Fraction(num, den);
    }

   
    Fraction mn2(const Fraction& numbers)  {
        int num = num1* numbers.num2;
        int den = num2 * numbers.num1;
        return Fraction(num, den);
    }

    
    int getnum1() {
        return num1;
    }
    int getnum2() {
        return num2;
    }
};

int main() {
    Fraction p1(1, 2); 
    Fraction p2(3, 4); 

    Fraction sum = p1.add(p2);
    Fraction dil= p1.dill(p2);
    Fraction product = p1.mn(p2);
    Fraction quotient = p1.mn2(p2);

   
    cout << "Sum: " << sum.getnum1() << "/" << sum.getnum2() << endl;
    cout << "Min: " << dil.getnum1() << "/" << dil.getnum2() << endl;
    cout << "MN: " << product.getnum1() << "/" << product.getnum2() << endl;
    cout << "Dill: " << quotient.getnum1() << "/" << quotient.getnum2() << endl;

