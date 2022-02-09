#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include "tree.h"

int main ()
{
    RandomBinaryTree<int> obj;
    obj.insert (1);
    obj.insert(3);
    obj.insert(5);
    obj.insert(7);
    obj.insert(9);
    obj.insert(11);
    obj.insert(15);
    obj.insert(17);
    obj.insert(12);
    obj.display();
    std::cout<< "Liscie  " << obj.calc_leafs(obj.getroot(), 0) <<"\n";
    std::cout<< "Liscie2  " << obj.calc_leafs_iter() <<"\n";


    return 0;
}