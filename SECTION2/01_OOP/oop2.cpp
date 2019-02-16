
struct Complex
{
    double real;
    double image;
    

};

Complex add(const Complex& c1, const Complex& c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.image = c1.image + c2.image;
    
    return temp;
}

int main()
{
    Complex c1 = { 1, 1}; // 1 + 1i
    Complex c2 = { 2, 2}; // 2 + 2i
    
    Complex ret = add(c1, c2);    
}





