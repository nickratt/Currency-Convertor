#include <iostream>
#include "convertor.h"

using namespace std;

float pesos(float amt){
float total;
total = amt * 19.13;

return total;
}

float yen(float amt){
float total;
total = amt * 108.44;

return total;

}

float pound(float amt){
float total;
total = amt * 0.79;

return total;

}
