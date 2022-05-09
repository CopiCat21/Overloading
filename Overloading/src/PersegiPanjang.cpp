#include <iostream>
#include "include/PersegiPanjang.hpp"

using namespace std;

PersegiPanjang::PersegiPanjang(float midx, float midy, float panjang, float lebar)
{
    this->xmax = midx + (panjang)/2;
    this->xmin = midx - (panjang)/2;
    this->ymax = midy + (lebar)/2;
    this->ymin = midy - (lebar)/2;
}

void PersegiPanjang::cetak()
{
    float midx, midy, panjang, lebar;
    panjang = this->xmax - this->xmin;
    lebar = this->ymax - this->ymin;
    
    std::cout << "Titik Tengah x    : " << this->xmin + (panjang/2) << std::endl;
    std::cout << "Titik Tengah y    : " << this->ymin + (lebar/2) << std::endl;
    std::cout << "Panjang           : " << panjang << std::endl;
    std::cout << "Lebar             : " << lebar << std::endl;
    std::cout << "X Maksimum        : " << this->xmax << std::endl;
    std::cout << "X Minimum         : " << this->xmin << std::endl;
    std::cout << "Y Maksimum        : " << this->ymax << std::endl;
    std::cout << "Y Minimum         : " << this->ymin << std::endl;
    std::cout << "\n" << std::endl;
}

bool PersegiPanjang::operator==(PersegiPanjang sama)
{
    if(((this->xmin < sama.xmin && sama.xmin < this->xmax) || (this->xmin < sama.xmax && sama.xmax < this->xmax))
        && ((this->ymin < sama.ymin && sama.ymin < this->ymax) || (this->ymin < sama.ymax && sama.ymax < this->ymax)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

PersegiPanjang PersegiPanjang::operator+(PersegiPanjang persegi)
{
    persegi.xmax = max(this->xmax, persegi.xmax);
    persegi.xmin = min(this->xmin, persegi.xmin);
    persegi.ymax = max(this->ymax, persegi.ymax);
    persegi.xmin = min(this->ymin, persegi.ymin);

    if(*this == persegi)
    {
        return persegi;
    }
}

PersegiPanjang PersegiPanjang::operator-(PersegiPanjang persegi)
{
    persegi.xmax = min(this->xmax, persegi.xmax);
    persegi.xmin = max(this->xmin, persegi.xmin);
    persegi.ymax = min(this->ymax, persegi.ymax);
    persegi.xmin = max(this->ymin, persegi.ymin);

    if(*this == persegi)
    {
        return persegi;
    }
}

PersegiPanjang PersegiPanjang::operator++()
{
    float midx, midy, panjang, lebar;

    panjang = (this->xmax - this->xmin);
    lebar   = (this->ymax - this->ymin);
    midx    = this->xmax + (panjang/2);
    midy    = this->ymax + (lebar/2);

    panjang = panjang*2;
    lebar   = lebar*2;

    this->xmax = midx + (panjang/2);
    this->xmin = midx - (panjang/2);
    this->ymax = midy + (lebar/2);
    this->ymin = midy + (lebar/2);
    return *this;
}

PersegiPanjang PersegiPanjang::operator--()
{
    float midx, midy, panjang, lebar;

    panjang = (this->xmax - this->xmin);
    lebar   = (this->ymax - this->ymin);
    midx    = this->xmax + (panjang/2);
    midy    = this->ymax + (lebar/2);

    panjang = panjang/2;
    lebar   = lebar/2;

    this->xmax = midx + (panjang/2);
    this->xmin = midx - (panjang/2);
    this->ymax = midy + (lebar/2);
    this->ymin = midy + (lebar/2);
    return *this;
}

float PersegiPanjang::operator[](int input)
{
    switch(input)
    {
        case 1: return this-> xmax; break;
        case 2: return this-> xmin; break;
        case 3: return this-> ymax; break;
        case 4: return this-> ymin; break;
    }
}