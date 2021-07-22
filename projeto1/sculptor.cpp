#include "sculptor.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


sculptor::sculptor(int _nx, int _ny, int _nz)
{

    nx=_nx, ny=_ny, nz=_nz;
        //alocação do array auxiliar de array's
        v=new Voxel**[nx];
        if( v == NULL){
            cout << "new error\n";



}
}
