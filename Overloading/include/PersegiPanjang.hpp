#ifndef _PersegiPanjang_HPP_
#define _PersegiPanjang_HPP_

#include <iostream>

class PersegiPanjang
{
    private:
        float xmin, xmax, ymin, ymax;
    public:
        PersegiPanjang (float midx, float midy, float panjang, float lebar);

    PersegiPanjang operator + (PersegiPanjang);
    PersegiPanjang operator - (PersegiPanjang);
    PersegiPanjang operator ++ ();
    PersegiPanjang operator -- ();
    float operator [] (int);
    bool operator == (PersegiPanjang);
    void cetak();
};
#endif