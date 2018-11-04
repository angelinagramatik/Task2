#include <iostream>

int main(int argc, const char * argv[]) {
    
    bool b = 1;         // 1 byte true/false
    char c = 'c';         // 1 byte 255, [-127 - 128]
    int i = 1;          // 4 byte = 32 bit = 4 000 000 000
    float f = 1.1;        // 4 byte
    long l = 1.00001;         // 8 byte
    double d = 1.00000001;       // 8 byte
    long long ll = 1.1;   // 16 byte
    long double ld = 1.2; // 16 byte
    
    unsigned u; // unsigned int
    
    if (1)// 0 = false another = true
    {
    }
    else
    {
    }
    
    switch (i) // работает только с константами
    {
        case 1 :
            std::cout << " i = 1\n";
            break;
            
        case 2 :
            std::cout << "i = 2\n";
            break;
            
        default:
            break;
    }
    
    // унарный оператор
    
    i = 2;
    
    
    // тернарный оператор
    
    f = (i > 3)? 4 : 0;
    
    std::cout << f;
    std::cout << "\n";
    
    //массивы и коллекции
    int y[10] = {0,1,2,3,4};
   
    // циклы
    for (int i = 0; i<10; ++i)
    {
        std::cout << y[i] << ", ";
    }
    std::cout << "\n";
    
    //prefix incremen ++i; одна операция больше скорость обработки
    //postfix increment i++; 4 операции
    
    int t = 2;
    int h = t++ + ++t; //unexpected behaviar
    
    std::cout << h << std::endl;
    
    //while (b)
    //{}
        
    //do {}
    //while (b);
    
    //указатели stack heap
    
    int tt = 5; //stack
    
    int* pI = new int;//heap
    
    std::cout << pI << "\n";
    std::cout << *pI << "\n";
    
    // ссылка
    pI = &tt;
    std::cout << *pI << "\n";
    
    int& rY = tt;
    std::cout << rY << "\n";
    
    //delete pI;
    
    return 0;
}
