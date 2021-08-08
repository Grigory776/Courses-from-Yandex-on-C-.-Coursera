#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;

/*Класс добавления базовых математических операций*/

class FunctionPart {
public:
    FunctionPart(char operation, double val){
        Op = operation;
        v = val;
    }
    double Apply(double val) const {
        if (Op == '*')
            return val * v;

        else if (Op == '/')
            return val / v;

        else if (Op == '+')
            return val + v;

        else
            return val - v;
    }
    void Invert() {
        if (Op == '*')
            Op = '/';

        else if (Op == '/')
            Op = '*';
            
        else if (Op == '+')
            Op = '-';

        else
            Op = '+';
    }


private:
    char Op;
    double v;

};

class Function {
public:
    void AddPart(char operation, double val) { // добавление операции с числом
        parts.push_back(FunctionPart (operation, val) );
    }
    double Apply(double val) const{ // применяет все операции над вэлью
        for (const FunctionPart& a : parts) {
            val = a.Apply(val);
        }
        return val;
    }
    void Invert() { // превращает все операции в обратные
        for (FunctionPart& a : parts) {
            a.Invert();
        }
        reverse(begin(parts),end(parts));
    }


private:
    vector<FunctionPart> parts;
};

struct Image {
    double quality;
    double freshness;
    double rating;
};

struct Params {
    double a;
    double b;
    double c;
};

Function MakeWeightFunction(const Params& params,
    const Image& image) {
    Function function;
    function.AddPart('*', params.a);
    function.AddPart('-', image.freshness * params.b);
    function.AddPart('+', image.rating * params.c);
    return function;
}

double ComputeImageWeight(const Params& params, const Image& image) {
    Function function = MakeWeightFunction(params, image);
    return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params& params,
    const Image& image,
    double weight) {
    Function function = MakeWeightFunction(params, image);
    function.Invert();
    return function.Apply(weight);
}

int main() {
    Function f;
    f.AddPart('+', 1);
    f.AddPart('-', 2);
    f.AddPart('*', -1);
    f.AddPart('/', 4);
    f.Invert();
    
    cout << f.Apply(0) << endl;
}
