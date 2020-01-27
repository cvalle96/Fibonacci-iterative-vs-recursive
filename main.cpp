//ITERATIVO

#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int fib(int num) {
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}


int main()
{
    long num = 50;
    auto start = high_resolution_clock::now();
    cout << "Factorial " << num << " es " << fib(num) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo: "
         << duration.count()<< " microseconds" << endl;
    return 0;
}



//RECURSIVO

/*#include<iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


int fib(int x) {
    if((x==1)||(x==0)) {
        return(x);
    }else {
        return(fib(x-1)+fib(x-2));
    }
}

int main()
{
    int num = 46;
    auto start = high_resolution_clock::now();
    cout << "Fibonacci de " << num << " es " << fib(num) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Tiempo "<< duration.count()<< " microseconds" << endl;
    return 0;
}*/